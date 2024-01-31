#pragma once
#include <iostream>
using namespace std;
class Cars {
private:
	string model;
	int year;
	string colour;
	int price;

public:
	Cars(string model, int year, string colour, int price);
	//void setModel(string newModel);
	string getModel() const;
	//void setYear(int newYear);
	int getYear() const;
	//void setColour(string newColour);
	string getColour() const;
	//void setPrice(int newPrice);
	int getPrice() const;
	void printInfo() const;

};