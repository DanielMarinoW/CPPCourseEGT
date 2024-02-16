#pragma once
#include<iostream>
#include<string>
using namespace std;
class Shape
{
public:
	Shape(string color);
	virtual void draw();
protected:
	string color;
};

