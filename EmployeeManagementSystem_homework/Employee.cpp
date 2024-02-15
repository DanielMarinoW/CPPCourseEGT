#include "Employee.h"

Employee::Employee(string name, int id, string pos) {
	setName(name);
	setEmployeeID(id);
	setPosition(pos);
}


void Employee::setName(string name) {
	this->_name = name;
}

void Employee::setEmployeeID(int id) {
	this->_employeeID = id;
}

void Employee::setPosition(string pos) {
	this->_position = pos;
}


string Employee::getName() const {
	return this->_name;
}

int Employee::getEmployeeID() const {
	return this->_employeeID;
}

string Employee::getPosition() const {
	return this->_position;
}


void Employee::display() const {
	cout << "Name: " << this->getName() << ", employee id: " << this->getEmployeeID() << ", position: "
		<< this->getPosition() << endl;
}