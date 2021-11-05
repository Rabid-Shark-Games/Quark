cmake_minimum_required(VERSION 3.10)

project(Quark)

link_libraries(glfw GL)

add_executable(Quark src/main.cpp src/audio.cpp src/audio.h src/node/Node.cpp src/node/Node.h src/node/Quark.h src/node/CountingQuark.cpp src/node/CountingQuark.h src/windowing/Window.cpp src/windowing/Window.h)