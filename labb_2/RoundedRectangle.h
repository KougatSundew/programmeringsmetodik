//
// Created by Joel Olofsson on 2021-11-30.
//

#ifndef LABB_2_ROUNDEDRECTANGLE_H
#define LABB_2_ROUNDEDRECTANGLE_H

#include "Rectangle.h"

class RoundedRectangle : public Rectangle {
    int cornerRadius;
public:
    RoundedRectangle(int height, int width, int cornerRadius, char* color);
    int getArea() override;
};


#endif //LABB_2_ROUNDEDRECTANGLE_H
