#pragma once
#include <iostream>
#include <string>
#include "Drinks.h"
using namespace std;

class NonAlcoholic : public Drinks
{
	
public:
	NonAlcoholic( string, string, double, double,double, double );
	virtual double calculatePrice();
	void setCityTax(double cityTax);
	double getCityTax();
	void setLiters(double liters);
	double getLiters();
	void print();

private:
	double cityTax;
	double liters;
	


};

