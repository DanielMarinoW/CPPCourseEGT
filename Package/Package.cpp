#include "Package.h"

Package::Package(Address senderAddress, Address receiverAddress, double price, double weight) 
    :senderAddress(senderAddress), receiverAddress(receiverAddress)
{
    setPrice(price);
    setWeight(weight);
}

void Package::setPrice(double price)
{
    this->price = price;
}

double Package::getPrice()
{
    return this->price;
}

void Package::setWeight(double weight)
{
    this->weight = weight;
}

double Package::getWeight()
{
    return this->weight;
}

Address Package::getRecipient()
{
    return this->senderAddress;
}
