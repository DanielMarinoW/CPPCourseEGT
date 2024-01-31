#pragma once
#include <string>
#include "TwoDimShape.h"
using namespace std;


class Rectangle : public TwoDimShape
{
public:
	Rectangle(int, int, int, string, char, int);
	virtual void print();
	virtual double getArea();
	void setSize(int);
	void setPosition(int);
	void setSh(string);
	void setCh(char);
	void setSideB(int);

	int getSize();
	int getPosition();
	string getSh();
	char getCh();
	int getSideB();



};

