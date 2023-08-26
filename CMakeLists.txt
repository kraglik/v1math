cmake_minimum_required(VERSION 3.26)
project(v1math C)

set(CMAKE_C_STANDARD 23)

include_directories(include)
add_library(v1math)
add_subdirectory(src)