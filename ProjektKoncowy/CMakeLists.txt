CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

PROJECT(ProjektKoncowy)

include_directories(include)

add_executable(ProjektKoncowy src/main.cpp src/Actor.cpp src/Scena.cpp src/ScenaDialog.cpp src/ScenaWalka.cpp)