cmake_minimum_required(VERSION 3.10)
project(kik2_0)

set(CMAKE_CXX_STANDARD 17)

add_executable(kik2_0 main.cpp coordp/coordp.cpp coordc/coordc.cpp fu/fu.cpp)