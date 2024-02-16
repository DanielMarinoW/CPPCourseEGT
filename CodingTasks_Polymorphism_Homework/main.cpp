#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include <iostream>
using namespace std;

void printArea( Shape* shape) {
    cout << "Area of the shape: " << shape->area() << endl;
}
int main()
{
    Circle circle(2.5);
    Rectangle rectangle(6.0, 8.0);

    printArea(&circle);
    printArea(&rectangle);
}


