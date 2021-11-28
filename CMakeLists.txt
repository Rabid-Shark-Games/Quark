cmake_minimum_required (VERSION 2.8.12)
project (Quark)

find_package (SDL2 CONFIG REQUIRED)
find_package (glm CONFIG REQUIRED)
find_package (Boost REQUIRED)

include_directories (${Boost_INCLUDE_DIRS})

add_executable (Quark main.cpp)

add_subdirectory (engine)
add_subdirectory (graphics)

target_link_libraries (Quark PRIVATE SDL2::SDL2 SDL2::SDL2main glm::glm Boost::boost)
