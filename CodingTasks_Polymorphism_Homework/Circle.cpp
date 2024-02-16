#include "Circle.h"

Circle::Circle(const string color, double radius) 
	: Shape(color), radius(radius) {
}

double Circle::area()
{
	return PI * radius * radius;
}

void Circle::draw()  {
	cout << "Drawing a " << color << " circle" <<endl;
}