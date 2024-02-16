#include "Circle.h"


Circle::Circle(double radius) : radius(radius) {
}

double Circle::area()
{
	return PI * radius * radius;
}
