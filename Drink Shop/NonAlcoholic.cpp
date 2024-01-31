#include "NonAlcoholic.h"
#include "Drinks.h"

NonAlcoholic::NonAlcoholic(string name, string type, double price, double quantity, double cityTax, double liters)
    :Drinks(name, type,price,quantity)
{
    setCityTax(cityTax);
    setLiters(liters);
}

double NonAlcoholic::calculatePrice()
{
    double calculatePrice = getQuantity() * (getPrice() * getCityTax());
    return calculatePrice;
}

void NonAlcoholic::setCityTax(double cityTax)
{
    this->cityTax = cityTax;
}

double NonAlcoholic::getCityTax()
{
    return  this->cityTax;
}

void NonAlcoholic::setLiters(double liters)
{
    this->liters = liters;
}

double NonAlcoholic::getLiters()
{
    return  this->liters;
}

void NonAlcoholic::print()
{
    Drinks::print();
    cout << " Liter " << getLiters() << endl << " City tax " << getCityTax() << endl;
}
