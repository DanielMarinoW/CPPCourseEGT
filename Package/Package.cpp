#include "Package.h"

Package::Package(Adress senderAddress, Adress receiverAddres, double price, double weight) :senderAddress(senderAddress),
receiverAddress(receiverAddres)
{
    this->setPrice(price);
    
    this->setWeight(weight);
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

Adress Package::getRecipient()
{
    return this->senderAddress;
}

