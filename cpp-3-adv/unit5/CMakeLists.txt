cmake_minimum_required(VERSION 3.25)

project(main)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} main.cpp
        Rectangle.h
        Rectangle.cpp
        AccountLocked.cpp
        AccountLocked.h)
