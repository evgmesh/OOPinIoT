cmake_minimum_required(VERSION 3.20)
project(Assignment10)

set(CMAKE_CXX_STANDARD 14)

add_executable(Assignment10 main.cpp lib/Counter.h src/LimitedCounter.cpp lib/LimitedCounter.h src/OverflowCounter.cpp lib/OverflowCounter.h)
