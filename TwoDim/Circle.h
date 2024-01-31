#pragma once
#include "TwoDimShape.h"

class Circle : TwoDimShape
{
public:
	Circle(int, int);
	void print();
	double getArea();

private:
	int radius;


};

