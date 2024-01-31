#include "Alcoholic.h"

Alcoholic::Alcoholic(string name, string type, double price, double quantity, double volume, double tax)
    :Drinks(name, type, price, quantity)
{
    setVolume(volume);
    setTax(tax);
}

double Alcoholic::calculatePrice()
{
    double calculateAlcoholPrice = getQuantity() * (getPrice() * getTax());
    return calculateAlcoholPrice;
}

void Alcoholic::print()
{
    Drinks::print();
    cout << " Alcoholic : " << getVolume() << endl << " Tax: " << getTax() << endl;

}

void Alcoholic::setVolume(double volume)
{
    this->volume = volume;
}

double Alcoholic::getVolume()
{
    return this->volume;
}

void Alcoholic::setTax(double tax)
{
    this->tax = tax;
}

double Alcoholic::getTax()
{
    return this->tax;
}
