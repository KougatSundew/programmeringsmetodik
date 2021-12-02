//
// Created by jolof on 2021-11-26.
//

#include "Rectangle.h"
Rectangle::Rectangle(double height, double width, char* color):Shape(color), height(height), width(width) {}

double Rectangle::getArea() {
    return width*height;
}

double Rectangle::getHeight() {
    return height;
}

double Rectangle::getWidth() {
    return width;
}
