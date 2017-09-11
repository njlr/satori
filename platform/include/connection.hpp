#ifndef PLATFORM_CONNECTION_HPP
#define PLATFORM_CONNECTION_HPP

#include <uv.h>
#include <functional>
#include <platform/writer.hpp>

struct Connection : uv_tcp_t {
	uv_tcp_t* server;
	std::function<void(Connection*, char const* b, char const* e)> onData;
	std::function<void(Connection*)> onDataEnd;

	Connection(uv_tcp_t* server)
		:server{server}
	{}

	void read() {
		uv_read_start(
			(uv_stream_t*)this,
			alloc_buffer, Connection::onRead);
	}

	void stopReading() {
		uv_read_stop((uv_stream_t*)this);
	}

	template<class F>
	auto write(char const* str, ssize_t len, F&&f) {
		auto writer = new Writer{};
    writer->stream = (uv_stream_t*)this;
    writer->then = f;
		writer->write(str, len);
		return writer;
	}

	bool accept() {
		return uv_accept((uv_stream_t*)server, (uv_stream_t*)this);
	}

	void close() {
		uv_close((uv_handle_t*)this, [](uv_handle_t* h){
			auto c = (Connection*)h;
			delete (Connection*)h;
		});
	}

  operator uv_tcp_t&(){
    return (uv_tcp_t&)*this;
  }

  static void onRead(uv_stream_t* h, ssize_t nread, uv_buf_t const* data){
		auto c = (Connection*)h;
		if(nread < 0) {
			c->close();
		} else if(nread == UV_EOF) {
			c->onDataEnd(c);
		} else {
			c->onData(c, data->base, data->base + data->len);
		}
	}

};

#endif