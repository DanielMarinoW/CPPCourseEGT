#pragma once
#include <string>
using namespace std;

class Adress
{
private:
	string name;
	string phone;
	string city;
	string street;

public:
	Adress(string name , string phone  , string city ,string street );
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

