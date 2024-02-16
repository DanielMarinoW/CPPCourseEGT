#pragma once
#include "Shape.h"
#include<iostream>
using namespace std;



class Circle : public Shape
{
public: 
	
	Circle(const string color, double radius);
	double area()  override;
	void draw()  override;
	
private:
	double radius;
	const double PI = 3.14159265358979323846;
};

