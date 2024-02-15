#pragma once

#include <vector>

#include "Employee.h"

class Department {

public:
	
	Department(string);

	
	void setDepartmentName(string);

	
	string getDepartmentName() const;

	
	void addEmployee(Employee*);
	void displayEmployees();

private:
	string  _departmentName;
	vector<Employee*> _employees;
	int  _numEmployees;

};