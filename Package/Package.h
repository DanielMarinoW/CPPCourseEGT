#pragma once
#include <string>
using namespace std;
#include "Adress.h"
class Package
{




private:

	double price;
	Adress senderAddress;
	Adress receiverAddress;
	double weight;

public:
	Package(Adress senderAddress, Adress receiverAddres, double price, double weight);

	void setPrice(double price);
	double getPrice();
	void setWeight(double weight);
	double getWeight();
	Adress getRecipient();
};

