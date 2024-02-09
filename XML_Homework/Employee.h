#pragma once
#include<iostream>
#include "Workstation.h"
#include<string>
using namespace std;

class Employee {
public:
	Employee(string name, string type, int age, Workstation& workstation);
	~Employee();

	void setName(string name);
	void setType(string type);
	void setAge(int age);

	void EmployeeDisplayInfo() const;

private:
	std::string _name;
	std::string _type;
	int	_age;

	string getName() const;
	string getType() const;
	int         getAge() const;

	Workstation* _workstation;

};

