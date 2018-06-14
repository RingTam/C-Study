cmake_minimum_required(VERSION 3.10)
project(CPlusStudy)

set(CMAKE_CXX_STANDARD 11)

add_executable(inherit
        inherit/Inherit.cpp
        inherit/TestInherit.cpp)

add_executable(struct
        struct/TestStruct.cpp)