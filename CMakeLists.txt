cmake_minimum_required(VERSION 3.10)

project(Quark)

add_executable(Quark src/main.cpp src/audio.cpp src/audio.h src/node/Node.cpp src/node/Node.h src/node/Quark.h src/node/CountingQuark.cpp src/node/CountingQuark.h)

link_libraries(Quark mono-2)