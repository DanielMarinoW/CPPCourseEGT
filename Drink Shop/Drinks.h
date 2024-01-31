#pragma once
#include <iostream>
using namespace std;
#include <string>

class Drinks
{
	
public:
	Drinks(string, string, double, double);
	virtual double calculatePrice();
	void setName(string name);
	string getName();
	void setType(string type);
	string getType();
	void setPrice(double price);
	double getPrice();
	void setQuantity(double quantity);
	double getQuantity();
	virtual void print();
private:
	string name;
	string type;
	double price;
	double quantity;

};

