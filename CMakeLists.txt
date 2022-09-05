cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project("mcstas-udp-transmit" C CXX)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

include_directories(.)

add_library(wrapper SHARED)
target_sources(wrapper PRIVATE wrapper.cpp BifrostReadout.cpp wrapper.h BifrostReadout.h)

