cmake_minimum_required(VERSION 3.16)

project(Dziedziczenie)
include_directories(include)

add_executable(Dziedziczenie src/main.cpp src/Figure.cpp src/Rectangle.cpp src/Circle.cpp src/Triangle.cpp)