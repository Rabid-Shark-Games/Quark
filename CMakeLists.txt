cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)

project(Quark)

include_directories(libs/glad/include)

#SET(OpenGL_GL_PREFERENCE GLVND)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(glfw)

link_libraries(glfw)

add_executable(Quark libs/glad/src/glad.c src/main.cpp src/node/AudioQuark.cpp src/node/AudioQuark.h src/node/Node.cpp src/node/Node.h src/node/Quark.h src/node/CountingQuark.cpp src/node/CountingQuark.h src/windowing/Window.cpp src/windowing/Window.h src/node/World.cpp src/node/World.h src/node/CameraQuark.cpp src/node/CameraQuark.h src/node/CubeQuark.cpp src/node/CubeQuark.h)