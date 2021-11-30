//
// Created by Joel Olofsson on 2021-11-30.
//

#include "RoundedRectangle.h"
RoundedRectangle::RoundedRectangle(int height, int width, int cornerRadius, char *color): Rectangle(height, width, color), cornerRadius(cornerRadius) {}

int RoundedRectangle::getArea() {
    return (Rectangle::getArea() - cornerRadius) * (4 - M_PI);
}
