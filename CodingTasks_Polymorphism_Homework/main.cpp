#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include <iostream>
using namespace std;

void printArea( Shape& shape) {
    shape.draw();
    cout << "Area: " << shape.area() << endl;
}

int main()
{
    Circle circle("red",2.5);
    Rectangle rectangle("green",6.0, 8.0);

    printArea(circle);
    printArea(rectangle);
}


