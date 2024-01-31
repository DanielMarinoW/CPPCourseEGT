#include "Address.h"

Address::Address(string name, string phone, string city, string street)
{
    setName(name);
    setPhone(phone);
    setCity(city);
    setStreet(street);
}

void Address::setName(string name)
{
    this->name = name;
}

string Address::getName()
{
    return this->name;
}

void Address::setPhone(string phone)
{
    this->phone = phone;
}

string Address::getPhone()
{
    return this->phone;
}

void Address::setCity(string city)
{
    this->city = city;
}

string Address::getCity()
{
    return this->city;
}

void Address::setStreet(string street)
{
    this->street = street;
}

string Address::getStreet()
{
    return this->street;
}

void Address::print() {
    cout << this->getName() << endl << this->getCity() << endl << this->getStreet() << endl << this->getPhone() << endl;
}