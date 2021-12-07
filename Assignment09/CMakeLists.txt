cmake_minimum_required(VERSION 3.20)
project(Assignment09)

set(CMAKE_CXX_STANDARD 14)

add_executable(Assignment09 main.cpp src/Point.cpp lib/Point.h src/Circle.cpp lib/Circle.h src/Square.cpp lib/Square.h)
