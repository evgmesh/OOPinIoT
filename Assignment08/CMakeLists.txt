cmake_minimum_required(VERSION 3.20)
project(Assignment08)

set(CMAKE_CXX_STANDARD 14)

add_executable(Assignment08 main.cpp src/Person.cpp lib/Person.h src/Spy.cpp lib/Spy.h)
