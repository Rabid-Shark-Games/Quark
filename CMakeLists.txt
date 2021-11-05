cmake_minimum_required(VERSION 3.10)

project(Quark)

add_executable(Quark src/main.cpp src/audio.cpp src/audio.h)

link_libraries(Quark mono-2)