cmake_minimum_required(VERSION 3.20)
project(C_basic LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Each exercise has its own main(), so each source is a separate executable.
file(GLOB_RECURSE EXERCISE_SOURCES
    RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
    CONFIGURE_DEPENDS
    "C++/*.cpp"
    "algorithm/*.cpp"
)

foreach(source IN LISTS EXERCISE_SOURCES)
    string(REGEX REPLACE "[^A-Za-z0-9_]+" "_" target "${source}")
    set(target "ex_${target}")
    add_executable("${target}" "${source}")
    target_compile_options("${target}" PRIVATE -Wall -Wextra)
endforeach()
