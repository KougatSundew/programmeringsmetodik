#include <iostream>
#include <vector>
#include <ctime>
#include "Rectangle.h"
#include "Circle.h"

using namespace std;
int Shape::numberOfObjects = 0;

void GetData();

int main() {
    srand(time(0));

    vector<Shape*> shapes(5, nullptr);
    for(vector<Shape*>::iterator ptr = shapes.begin(); ptr != shapes.end(); ptr++) {
    }
    char color[8] = "yellow";
    char* yellow = color;
    Rectangle test(12, 4, yellow);
    cout << test.getColor() << "\n";
    return 0;
}

void GetData() {

}