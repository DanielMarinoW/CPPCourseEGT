#include "Rectangle.h"
#include "TwoDimShape.h"
using namespace std;
#include <string>


Rectangle::Rectangle(int a, int size,int position, string sh, char ch, int sideB) :TwoDimShape(a,size,position,sh,ch) {
	setSize(size);
	setPosition(position);
	setSh(sh);
	setCh(ch);
	setSideB(sideB);

}
void Rectangle::print() {
	cout << "We are in rectangle print" << endl;
	
}

double Rectangle::getArea() {
	cout << "WE ARE IN getArea Rectangle" << endl;

	return getSideB() * Shape::getA();
}

void Rectangle::setSize(int size) {
	this->size = size;
}

void Rectangle::setPosition(int position) {
	this->position = position;
}

void Rectangle::setSh(string shap) {
	this->sh = shap;
}

void Rectangle::setCh(char ch) {
	this->ch = ch;
}

void Rectangle::setSideB(int b) {
	this->sideB = b;
}

int Rectangle::getSize()
{
	return 0;
}

int Rectangle::getPosition()
{
	return 0;
}

string Rectangle::getSh()
{
	return string();
}

char Rectangle::getCh()
{
	return 0;
}

int Rectangle::getSideB() {
	return this->sideB;
}




