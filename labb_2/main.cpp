#include <iostream>
#include <vector>
#include <ctime>
#include "Rectangle.h"
#include "Circle.h"
#include "RoundedRectangle.h"
#include "Parallelepiped.h"

using namespace std;
int Shape::numberOfObjects = 0;

void GetData();

int main() {
    srand(time(0));

    vector<Shape*> shapes(5, nullptr);
    shapes[0] = new Rectangle(25, 30, (char *) "blue");
    shapes[1] = new Circle(30, (char *) "red");
    shapes[2] = new RoundedRectangle(10, 20, 5, (char*) "green");

    Shape* test = shapes.at(2);
    cout << test->getArea() << endl;
    return 0;
}

void GetData() {

}