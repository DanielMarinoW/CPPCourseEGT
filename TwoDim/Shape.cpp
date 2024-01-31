#include "Shape.h"
#include <iostream>
using namespace std;


Shape::Shape(int side) {
    this->a = side;
}

void Shape::setA(int side) {
    this->a = side;
}

double Shape::getA() {
    return this->a;
}

void Shape::setShapeType(string type)
{
    this->type = type;
}

void Shape::setPosition(int position)
{
    this->position = position;
}

void Shape::setSiz(int size)
{
    this->size = size;
}

int Shape::getSize()
{
    return this->size;
}

int Shape::getPosition()
{
    return this->position;
}

string Shape::getShapeType()
{
    return this->type;
}



void Shape::print() {
    cout << "in shape" << endl;

}

double Shape::getArea() {
    cout << "In shape" << endl;
    return 0.0;
}
