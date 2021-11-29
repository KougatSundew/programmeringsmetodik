//
// Created by jolof on 2021-11-26.
//

#include "Rectangle.h"
Rectangle::Rectangle(int height, int width, char* color):Shape(color), height(height), width(width) {}

int Rectangle::getArea() {
    return width*height;
}