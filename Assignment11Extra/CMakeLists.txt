cmake_minimum_required(VERSION 3.21)
project(Assignment11Extra)

set(CMAKE_CXX_STANDARD 14)

add_executable(Assignment11Extra main.cpp Counter.h Observer.h CounterObserver.h OverflowCounter.cpp OverflowCounter.h LimitedCounter.cpp LimitedCounter.h Observer.cpp)
