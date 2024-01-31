#include "Drinks.h"

Drinks::Drinks(string name, string type, double price , double quantity)
{
    setName(name);
    setType(type);
    setPrice(price);
    setQuantity(quantity);
}

double Drinks::calculatePrice()
{
    return 0.0;
}

void Drinks::setName(string name)
{
    this->name = name;
}

string Drinks::getName()
{
    return this->name;
}

void Drinks::setType(string type)
{
    this->type = type;
}

string Drinks::getType()
{
    return this->type;
}

void Drinks::setPrice(double price)
{
    this->price = price;
}

double Drinks::getPrice()
{
    return this->price;
}

void Drinks::setQuantity(double quantity)
{
    this->quantity = quantity;
}

double Drinks::getQuantity()
{
    return this->quantity;
}

void Drinks::print()
{
    cout << "  " << name << endl << type << endl << price << endl << quantity << endl;
}
