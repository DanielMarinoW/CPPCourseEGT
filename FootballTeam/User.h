#pragma once
#include <iostream>
#include <string>
using namespace std;
class User
{
public:
	User(string, string);
	void setName(string name);
	string getName();
	void setPassword(string password);
	string getPassword();
	void printUser();


private:
	string name;
	string password;
};

