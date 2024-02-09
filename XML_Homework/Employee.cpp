#include "Employee.h"

Employee::Employee(string name, string type, int age, Workstation& workstation) {
	setName(name);
	setType(type);
	setAge(age);
	this->_workstation = &workstation;
}

Employee::~Employee() {
	cout << "Deleting in Employee" << endl;
	delete this->_workstation;
	this->_workstation = nullptr;
	cout << "In Employee - Workstation has been deleted." << endl;
}

void Employee::setName(string name) {
	this->_name = name;
}

void Employee::setType(string type) {
	this->_type = type;
}

void Employee::setAge(int age) {
	this->_age = age;
}

void Employee::EmployeeDisplayInfo() const {
	cout << "Name: " << getName() << " Type: " << getType() << " Age: " << getAge() << endl;

	if (_workstation == nullptr) {
		cout << "Workstation is empty" <<endl;
	}
	else {
		this->_workstation->WorkstationDisplayInfo();
	}
}

std::string Employee::getName() const {
	return this->_name;
}

std::string Employee::getType() const {
	return this->_type;
}

int Employee::getAge() const {
	return this->_age;
}