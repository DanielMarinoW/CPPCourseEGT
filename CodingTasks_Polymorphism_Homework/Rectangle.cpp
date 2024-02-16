#include "Rectangle.h"

Rectangle::Rectangle(double width, double height) : width(width), height(height)
{
}

double Rectangle::area()
{
    return width * height;
}
