CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

project(Lab8)

include_directories(include)

add_executable(Lab8 src/main.cpp src/Note.cpp src/TextNote.cpp src/ListNote.cpp src/NoteDirector.cpp)