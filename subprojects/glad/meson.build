project('glad', 'c')

include_dir = include_directories('include')
glad_lib = shared_library('glad', 'src/gl.c', include_directories: include_dir, install: true)

glad_dep = declare_dependency(include_directories: include_dir, link_with: glad_lib)
