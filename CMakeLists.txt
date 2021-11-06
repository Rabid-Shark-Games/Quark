cmake_minimum_required(VERSION 3.10)

execute_process(COMMAND python gl3w_gen.py --root ${PROJECT_BINARY_DIR}/libs/gl3w WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/libs/gl3w)

project(Quark)

include_directories(libs/glew/include)
link_directories(libs/glew/lib/Release/x64)

SET(OpenGL_GL_PREFERENCE GLVND)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(glfw)

find_package(OpenGL REQUIRED)

link_libraries(glfw OpenGL::OpenGL)

if (UNIX)
        link_libraries(GLEW)
elseif (WIN32)
        link_libraries(glew32)
endif()

add_executable(Quark src/main.cpp src/node/AudioQuark.cpp src/node/AudioQuark.h src/node/Node.cpp src/node/Node.h src/node/Quark.h src/node/CountingQuark.cpp src/node/CountingQuark.h src/windowing/Window.cpp src/windowing/Window.h src/node/World.cpp src/node/World.h src/node/CameraQuark.cpp src/node/CameraQuark.h src/node/CubeQuark.cpp src/node/CubeQuark.h)