#pragma once
#include <iostream>
#include "Address.h"
using namespace std;

class Package {
private:
	double price;
	Address senderAddress;
	Address receiverAddress;
	double weight;

public:
	Package(Address senderAddress, Address receiverAddress, double price, double weight);
	void setPrice(double price);
	double getPrice();
	void setWeight(double weight);
	double getWeight();
	Address getRecipient();
};