#pragma once
#include <iostream>
#include <vector>
#include "Drinks.h"
#include "Order.h"
using namespace std;

class User
{
private:
	string username;
	vector<Order>purchases;

public:
	User(string name);
	User(string username, vector<Order> purchases);
	void printUserOrder();
	void setUsername(string username);
	string getUsername();
	void addPurchase(Order);
	vector<Order>getPurchse();
};

