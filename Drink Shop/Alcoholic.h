#pragma once
#include "Drinks.h"
#include <iostream>
#include <string>
using namespace std;

class Alcoholic : public Drinks
{
private:
	double volume;
	double tax;

public:
	Alcoholic(string, string, double, double, double, double);
	virtual double calculatePrice();
	void print();
	void setVolume(double volume);
	double getVolume();
	void setTax(double tax);
	double getTax();
	


};

