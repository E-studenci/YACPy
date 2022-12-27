cmake_minimum_required(VERSION 3.23)
project(YACPy)

set(CMAKE_CXX_STANDARD 20)
add_executable(YACPy main.cpp attack_map.cpp board.cpp steps.cpp)
