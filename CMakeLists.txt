cmake_minimum_required(VERSION 3.10)

execute_process(COMMAND python gl3w_gen.py --root ${PROJECT_BINARY_DIR}/libs/gl3w WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/libs/gl3w)

project(Quark)

link_libraries(glfw GL)

add_executable(Quark src/main.cpp src/audio.cpp src/audio.h src/node/Node.cpp src/node/Node.h src/node/Quark.h src/node/CountingQuark.cpp src/node/CountingQuark.h src/windowing/Window.cpp src/windowing/Window.h)