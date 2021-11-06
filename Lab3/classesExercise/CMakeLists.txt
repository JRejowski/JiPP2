cmake_minimum_required(VERSION 3.16)

project(classesExercise)

set(CMAKE_CXX_STANDARD 17)

add_executable(classesExercise src/main.cpp src/Cuboid.cpp include/Cuboid.h src/Sphere.cpp include/Sphere.h src/QuadraticFunction.cpp include/QuadraticFunction.h)