cmake_minimum_required(VERSION 3.16)

project(classesExercise)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(classesExercise src/main.cpp src/Cuboid.cpp src/Sphere.cpp src/QuadraticFunction.cpp src/Student.cpp  src/Point.cpp)