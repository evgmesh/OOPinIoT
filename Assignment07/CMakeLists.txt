cmake_minimum_required(VERSION 3.20)
project(Assignment07)

set(CMAKE_CXX_STANDARD 14)

add_executable(Assignment07 main.cpp src/RandGen.cpp lib/RandGen.h src/Printer.cpp lib/Printer.h)
