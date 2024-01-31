#include "TwoDimShape.h"
#include <iostream>



TwoDimShape::TwoDimShape(int a,int size,int position,string sh,char ch) :Shape(a) {}

void TwoDimShape::print() {
    cout << "In 2d print" << endl;
}

double TwoDimShape::getArea() {
    cout << "in 2d getArea" << endl;
    return 0.0;
}

void TwoDimShape::setSize(int size) {
    this->size = size;
}

void TwoDimShape::setPosition(int position) {
    this->position = position;
}

void TwoDimShape::setSh(string sh) {
    this->sh = sh;
}

void TwoDimShape::setCh(char ch) {
    this->ch = ch;
}


void TwoDimShape::getSize() {
    return this->size;
}









