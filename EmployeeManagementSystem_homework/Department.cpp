#include "Department.h"

Department::Department(string name) {
	setDepartmentName(name);
	this->_numEmployees = 0;
}


void Department::setDepartmentName(string name) {
	this->_departmentName = name;
}


 string Department::getDepartmentName() const {
	return this->_departmentName;
}



void Department::addEmployee(Employee* employee) {
	this->_employees.push_back(employee);
	this->_numEmployees++;
}


void Department::displayEmployees() {
	cout << "Department name: " << this->getDepartmentName() << endl;
	for (auto employee : this->_employees) {
		employee->display();
	}
	cout << endl;
}