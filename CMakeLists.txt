cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project("mcstas-udp-transmit" CXX)

include_directories(.)

add_library(wrapper SHARED wrapper.c wrapper.h BifrostReadout.cpp BifrostReadout.h)
set_property(TARGET wrapper PROPERTY CXX_STANDARD 11)
