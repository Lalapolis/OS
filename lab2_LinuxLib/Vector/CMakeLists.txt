cmake_minimum_required(VERSION 3.21)
project(Vector)

set(CMAKE_CXX_STANDARD 17)
include_directories(../Number)
add_library(Vector SHARED Vector.h Vector.cpp)
target_link_directories(Vector PUBLIC Number)
