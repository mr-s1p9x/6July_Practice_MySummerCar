cmake_minimum_required(VERSION 3.28)
project(6July_Car)

set(CMAKE_CXX_STANDARD 17)

add_executable(6July_Car main.cpp
        Wheels.h
        Wheels.cpp
        Engine.h
        Engine.cpp
        Doors.h
        Doors.cpp
        Car.h
        Car.cpp)
