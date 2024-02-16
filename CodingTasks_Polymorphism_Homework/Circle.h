#pragma once
#include "Shape.h"
#include <cmath>
using namespace std;


class Circle : public Shape
{
public: 
	Circle(double radius);
	double area() override;
private:
	double radius;
	const double PI = 3.14159265358979323846;
};

