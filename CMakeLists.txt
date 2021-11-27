cmake_minimum_required (VERSION 2.8.12)
project (Quark)

find_package (SDL2 CONFIG REQUIRED)
find_package (glm CONFIG REQUIRED)

add_executable (Quark main.cpp Engine/World.cpp Engine/World.h Engine/Object.cpp Engine/Object.h)

add_subdirectory (graphics)

target_link_libraries (Quark PRIVATE SDL2::SDL2 SDL2::SDL2main glm::glm)
