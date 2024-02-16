#pragma once
#include"Shape.h"
#include<iostream>
using namespace std;
class Rectangle : public Shape
{

public:
    Rectangle(const string color, double width, double height);
    void draw()  override;
    double area()  override;
private:
    double width;
    double height;
};

