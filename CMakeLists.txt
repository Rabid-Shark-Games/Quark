cmake_minimum_required (VERSION 2.8.12)
project (Quark)

find_package(SDL2 CONFIG REQUIRED)

add_executable (Quark main.cpp "graphics/Graphics.hpp" "graphics/Graphics.cpp")

target_link_libraries(Quark PRIVATE SDL2::SDL2 SDL2::SDL2main)