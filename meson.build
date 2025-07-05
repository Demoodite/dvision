project(
  'dvision',
  'cpp',
  meson_version: '>= 1.3.0',
  version: '0.1',
  default_options: ['warning_level=3'],
)

dependencies = []

glad_proj = subproject('glad')
glad_dep = glad_proj.get_variable('glad_dep')
dependencies += glad_dep

cmake = import('cmake')

glfw_proj = cmake.subproject('glfw')
glfw_dep = glfw_proj.dependency('glfw')
dependencies += glfw_dep

glm_proj = cmake.subproject('glm')
glm_dep = glm_proj.dependency('glm')
dependencies += glm_dep

sources = []

subdir('src')

exe = executable(
  'dvision',
  sources,
  dependencies: dependencies,
  install: true,
)

test('basic', exe)
