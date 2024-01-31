#include "Adress.h"
#include<string>
#include <iostream>
using namespace std;



Adress::Adress(string name, string phone, string city, string street) {
	this->setName(name);
	this->setPhone(phone);
	this->setCity(city);
	this->setStreet(street);

}


void Adress::setName(string name)
{
	this->name = name;
}

string Adress::getName()
{
	return this->name;
}

void Adress::setPhone(string phone)
{
	this->phone = phone;
}

string Adress::getPhone()
{
	return this->phone;
}

void Adress::setCity(string city)
{
	this->city = city;
}

string Adress::getCity()
{
	return this->city;
}

void Adress::setStreet(string street)
{
	this->street = street;
}

string Adress::getStreet()
{
	return this->street;
}

void Adress::print() {
	cout << this->name << " " << this->phone << " " << this->city << " " << this->street << endl;
}
