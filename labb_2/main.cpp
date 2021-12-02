#include <iostream>
#include <vector>
#include "shapes/Rectangle.h"
#include "shapes/Circle.h"
#include "shapes/RoundedRectangle.h"
#include "shapes/Parallelepiped.h"
#include "shapes/Cylinder.h"

using namespace std;
int Shape::numberOfObjects = 0;

void GetData(vector<Shape*> shapes);

int main() {
    vector<Shape*> shapes(5, nullptr);
    shapes[0] = new Rectangle(25, 30, (char *) "blue");
    shapes[1] = new Circle(30, (char *) "red");
    shapes[2] = new RoundedRectangle(10, 20, 5, (char*) "green");
    shapes[3] = new Cylinder(20, 4, (char *) "black");
    shapes[4] = new Parallelepiped(10, 5, 20, (char*) "purple");

    GetData(shapes);

    return 0;
}

void GetData(vector<Shape*> shapes) {
    double totalArea = 0;
    cout << "Colours: " << "\n";
    for(auto shape : shapes) {
        if(shape) {
            cout << shape->getColor() << "\n";
            totalArea += shape->getArea();
        }
    }
    cout << "Total area: " << totalArea << "\n";
    cout << "Number of objects: " << shapes.at(0)->getNumberOfObjects() << "\n";
}