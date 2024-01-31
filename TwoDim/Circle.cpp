#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(int redius, int a) : TwoDimShape(a) {
	this->radius = redius;
}

void Circle::print() {
	cout << "Circle print" << endl;
}

double Circle::getArea() {
	cout << "Circle getArea" << endl;
	return 0.0;
}
