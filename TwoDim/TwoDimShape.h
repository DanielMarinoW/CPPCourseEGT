#include "Shape.h"
#pragma once;
#include <string>
using namespace std;


class TwoDimShape : public Shape {
public:
    TwoDimShape(int,int,int,string,char);
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

private:
    int size;
    int position;
    string sh;
    char ch;

};