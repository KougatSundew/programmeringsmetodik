//
// Created by jolof on 2021-11-26.
//

#ifndef LABB_2_CIRCLE_H
#define LABB_2_CIRCLE_H
#include "Shape.h"

class Circle: public Shape {
    int area = 0;
public:
    int getArea();
    char* getColor();
};


#endif //LABB_2_CIRCLE_H
