cmake_minimum_required(VERSION 3.21)
project(Contacts)

set(CMAKE_CXX_STANDARD 14)

add_executable(Contacts main.cpp Person.cpp Person.h Contacts.cpp Contacts.h)
