#pragma once
#include <iostream>
using namespace std;

class Address {
private:
	string name;
	string phone;
	string city;
	string street;

public:
	Address(string name, string phone, string city, string street);
	void setName(string name);
	string getName();
	void setPhone(string phone);
	string getPhone();
	void setCity(string city);
	string getCity();
	void setStreet(string street);
	string getStreet();
	void print();





};
