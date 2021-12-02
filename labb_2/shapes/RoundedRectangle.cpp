//
// Created by Joel Olofsson on 2021-11-30.
//

#include "RoundedRectangle.h"
RoundedRectangle::RoundedRectangle(double height, double width, double cornerRadius, char *color): Rectangle(height, width, color), cornerRadius(cornerRadius) {}

double RoundedRectangle::getArea() {
    return (Rectangle::getArea() - cornerRadius) * (4 - M_PI);
}
