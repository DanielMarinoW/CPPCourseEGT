#pragma once
#include "TwoDimShape.h"



class Thriangle : public TwoDimShape {
private:
	int sideB;
	int sideC;

public:
	Thriangle(int, int, int);
	void print();
	double getArea();

};


