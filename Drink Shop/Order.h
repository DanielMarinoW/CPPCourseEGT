#pragma once
#include <iostream>
#include "Drinks.h"
#include <string>
#include <vector>
using namespace std;
class Order
{
public:
	Order(){}
	Order(string date,string purchaseNum);
	void addDrink(Drinks*);
	void soldDrinks();
	void printOrderV();
	void setPurchaseNum(string purchaseNum);
	string getPurchaseNum();
	void setTotlePrice(double totlePrice);
	double getTotlePrice();
	void setDate(string date);
	string getDate();


private:
	vector<Drinks*>orders;
	string date;
	double totlePrice;
	string purchaseNum;
	

};

