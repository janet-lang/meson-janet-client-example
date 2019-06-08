project('janet-meson-client-example', 'c',
  version : '0.1',
  default_options : ['c_std=c99', 'default_library=static'])

janet_dep = dependency('janet', fallback : ['janet', 'janet_dep'])

exe = executable('client', 'main.c',
  dependencies : janet_dep,
  install : true)

test('basic', exe)
