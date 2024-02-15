#pragma once

#include <iostream>
#include <string>
using namespace std;

class Employee {

public:

	
	Employee(string, int, string);

	
	void setName(string);
	void setEmployeeID(int);
	void setPosition(string);

	
	string getName() const;
	int         getEmployeeID() const;
	string getPosition() const;

	
	void display() const;

private:

	
    string _name;
	int  _employeeID;
	string _position;

};