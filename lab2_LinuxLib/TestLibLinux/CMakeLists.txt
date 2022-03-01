cmake_minimum_required(VERSION 3.21)
project(TestLibLinux)

set(CMAKE_CXX_STANDARD 17)

include_directories(../Number)
include_directories(../Vector)

file(GLOB num_lib "../Number/cmake-build-debug/libNumber.a")
file(GLOB vec_lib "../Vector/cmake-build-debug/libVector.so")

add_executable(TestLibLinux main.cpp ${num_lib} ${vec_lib})
target_link_libraries(TestLibLinux ${num_lib} ${vec_lib})
