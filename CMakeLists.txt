cmake_minimum_required(VERSION 3.26)
project(v1math C)

set(CMAKE_C_STANDARD 23)

include_directories(include)
add_library(v1math
    include/v1math/vector.h
    include/v1math/vector_array.h
    include/v1math/matrix.h
    include/v1math/quaternion.h
    include/v1math/scalar.h
    include/v1math/transform.h
)
add_subdirectory(src)