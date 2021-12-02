//
// Created by jolof on 2021-11-26.
//

#include "Shape.h"
Shape::Shape(char* color):color(color) {
    numberOfObjects++;
};
char* Shape::getColor() {
    return color;
}

int Shape::getNumberOfObjects() {
    return numberOfObjects;
}
