# Generated by Buckaroo - https://buckaroo.pm
include_defs('//BUCKAROO_DEPS')

cxx_library(
  name = 'satori',
  header_namespace = 'satori',
  exported_headers = subdir_glob([
    ('satori/include', '**/*.hpp'),
  ]),
  headers = subdir_glob([
    ('satori/detail', '**/*.hpp'),
  ]),
  srcs = glob([
    'satori/src/**/*.cpp',
  ]),
  deps = BUCKAROO_DEPS,
  visibility = [
    'PUBLIC',
  ],
)

cxx_binary(
  name = 'main',
  srcs = [
    'satori/apps/main.cpp',
  ],
  deps = [
    ':satori',
  ],
)

cxx_binary(
  name = 'uv_readfile',
  srcs = [
    'satori/apps/uv_readfile.cpp',
  ],
  deps = BUCKAROO_DEPS,
)

cxx_binary(
  name = 'uv_readfile_reuse_req',
  srcs = [
    'satori/apps/uv_readfile_reuse_req.cpp',
  ],
  deps = BUCKAROO_DEPS,
)

cxx_binary(
  name = 'satori_writefile',
  srcs = [
    'satori/apps/satori_writefile.cpp',
  ],
  deps = BUCKAROO_DEPS + [
    ':satori',
  ],
)

cxx_binary(
  name = 'satori_getrequest',
  srcs = [
    'satori/apps/satori_getrequest.cpp',
  ],
  deps = BUCKAROO_DEPS + [
    ':satori',
  ],
)


cxx_binary(
  name = 'satori_utime',
  srcs = [
    'satori/apps/satori_utime.cpp',
  ],
  deps = BUCKAROO_DEPS + [
    ':satori',
  ],
)

cxx_binary(
  name = 'satori_stat',
  srcs = [
    'satori/apps/satori_stat.cpp',
  ],
  deps = BUCKAROO_DEPS + [
    ':satori',
  ],
)

cxx_binary(
  name = 'satori_process',
  srcs = [
    'satori/apps/satori_process.cpp',
  ],
  deps = BUCKAROO_DEPS + [
    ':satori',
  ],
)

cxx_binary(
  name = 'uv_process',
  srcs = [
    'satori/apps/uv_process.cpp',
  ],
  deps = BUCKAROO_DEPS,
)

cxx_binary(
  name = 'nodejs_parse_http',
  srcs = [
    'satori/apps/nodejs_parse_http.cpp',
  ],
  deps = BUCKAROO_DEPS,
)

cxx_binary(
  name = 'satori_parse_http',
  srcs = [
    'satori/apps/satori_parse_http.cpp',
  ],
  deps = [
    ':satori',
  ],
)

cxx_binary(
  name = 'satori_filestream',
  srcs = [
    'satori/apps/satori_filestream.cpp',
  ],
  deps = [
    ':satori',
  ],
)

cxx_binary(
  name = 'r3_router',
  srcs = [
    'satori/apps/r3_router.cpp',
  ],
  deps = [
    ':satori',
  ],
)

cxx_binary(
  name = 'satori_router',
  srcs = [
    'satori/apps/satori_router.cpp',
  ],
  deps = [
    ':satori',
  ],
)

cxx_binary(
  name = 'satori_express',
  srcs = [
    'satori/apps/satori_express.cpp',
  ],
  deps = [
    ':satori',
  ],
)
