using namespace std;
#include <iostream>
#include <vector>
#include <string>
#pragma once;

class Shape {

private:
	int a;
	string type;
	int size;
	int position;

public:
	Shape(int);
	virtual void print();
	virtual double getArea();
	void setA(int);
	double getA();

	virtual void setShapeType(string type);
	virtual void setPosition(int position);
	virtual void setSiz(int size);

	virtual int getSize();
	virtual int getPosition();
	virtual string getShapeType();

};