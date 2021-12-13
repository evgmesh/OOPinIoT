cmake_minimum_required(VERSION 3.21)
project(Assignment11)

set(CMAKE_CXX_STANDARD 14)

add_executable(Assignment11 main.cpp Counter.h CounterUser.cpp CounterUser.h Observer.h OverflowCounter.cpp OverflowCounter.h)
