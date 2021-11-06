cmake_minimum_required(VERSION 3.10)

execute_process(COMMAND python gl3w_gen.py --root ${PROJECT_BINARY_DIR}/libs/gl3w WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/libs/gl3w)

project(Quark)

include_directories(libs/gl3w/include)
include_directories(libs/glfw/include)
link_directories(libs/glfw/lib)

link_libraries(glfw dl)

add_executable(Quark libs/gl3w/src/gl3w.c src/main.cpp src/node/AudioQuark.cpp src/node/AudioQuark.h src/node/Node.cpp src/node/Node.h src/node/Quark.h src/node/CountingQuark.cpp src/node/CountingQuark.h src/windowing/Window.cpp src/windowing/Window.h src/node/World.cpp src/node/World.h src/node/CameraQuark.cpp src/node/CameraQuark.h src/node/CubeQuark.cpp src/node/CubeQuark.h)