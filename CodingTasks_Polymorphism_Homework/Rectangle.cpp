#include "Rectangle.h"

Rectangle::Rectangle(const string color, double width, double height) 
    : Shape(color), width(width), height(height) {
}
double Rectangle::area()
{
    return width * height;
}

void Rectangle::draw()  {
    cout << "Drawing a " << color << " rectangle" << endl;
}