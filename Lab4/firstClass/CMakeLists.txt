cmake_minimum_required(VERSION 3.16)

project(firstClass)

set(CMAKE_CXX_STANDARD 17)

add_executable(firstClass src/main.cpp src/MyFirstClass.cpp include/MyFirstClass.h ../structExercise/src/main.cpp)