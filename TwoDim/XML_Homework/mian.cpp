#include<string>
#include <iostream>
#include "pugixml.h"
#include<vector>
#include"Employee.h"
#include"utility.h"
using namespace std;
using namespace pugi;

int main() {
    pugi::xml_document doc;

    if (!doc.load_file("employees.xml")) {
        return -1;
    }

    std::vector<Employee*> employees = createVectorFromFile(doc);
    printEmployeesInfo(employees);
    deleteEmployees(employees);

    return 0;
}