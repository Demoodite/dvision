project(
  'dvision',
  'cpp',
  meson_version: '>= 1.3.0',
  version: '0.1',
  default_options: ['warning_level=3'],
)

dependencies = []

glew_proj = subproject('glew')
glew_dep = glew_proj.get_variable('glew_dep')
dependencies += glew_dep

cmake = import('cmake')

glfw_proj = cmake.subproject('glfw')
glfw_dep = glfw_proj.dependency('glfw')
dependencies += glfw_dep

glm_proj = cmake.subproject('glm')
glm_dep = glm_proj.dependency('glm')
dependencies += glm_dep

sources = []
include_directories = []

subdir('src')

exe = executable(
  'dvision',
  sources,
  dependencies: dependencies,
  include_directories: include_directories,
  install: true,
)

test('basic', exe)
