#include "Thriangle.h"
#include <iostream>
using namespace std;

Thriangle::Thriangle(int sideB, int sideC, int a) :TwoDimShape(a) {
	this->sideB = sideB;
	this->sideC = sideC;

}

void Thriangle::print() {
	cout << "Triangle print" << endl;

}

double Thriangle::getArea() {
	cout << "Triangle getArea" << endl;
	return 0.0;

}
