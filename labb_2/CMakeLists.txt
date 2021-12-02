cmake_minimum_required(VERSION 3.20)
project(labb_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(labb_2 main.cpp shapes/Shape.cpp shapes/Shape.h shapes/Rectangle.cpp shapes/Rectangle.h shapes/Circle.cpp shapes/Circle.h shapes/Parallelepiped.cpp shapes/Parallelepiped.h shapes/RoundedRectangle.cpp shapes/RoundedRectangle.h shapes/Cylinder.cpp shapes/Cylinder.h)
