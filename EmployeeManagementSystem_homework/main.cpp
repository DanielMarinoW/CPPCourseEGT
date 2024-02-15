#include "Employee.h"
#include "Department.h"

int main() {
    
    Employee firstEmployee("Daniel Marinov", 10235, "Intern");
    Employee secondEmployee("Liubomir Lazarov", 25463, "Intern");
    Employee thirdEmployee("Liubomir Velev", 12387, "Junior staffer");
    Employee fourthEmployee("Ana Apostolova", 54102, "Junior staffer");
    Employee fifthEmployee("Ivo Georgiev", 30245, "Senior staffer");
    Employee sixthEmployee("MatIN Bojilov", 10233, "Team leader");
    Employee seventhEmployee("Gosho Petok", 45632, "Junior staffer");
    Employee eighthEmployee("Ivana Dimitrova", 10021, "CEO");



   
    std::vector<Employee*> employeesVec{ &firstEmployee, &secondEmployee, &thirdEmployee };
    employeesVec.push_back(&fourthEmployee);
    employeesVec.push_back(&fifthEmployee);
    employeesVec.push_back(&sixthEmployee);
    employeesVec.push_back(&seventhEmployee);
    employeesVec.push_back(&eighthEmployee);

    
    Department firstDepartment("Some kind of job");
    Department* secondDepartment = new Department("Concrete junction");

   
    for (size_t i = 0; i < employeesVec.size(); ++i) {
        if (i % 2 == 0) {
            firstDepartment.addEmployee(employeesVec[i]);
        }
        else {
            secondDepartment->addEmployee(employeesVec.at(i));
        }
    }

   
    firstDepartment.displayEmployees();
    secondDepartment->displayEmployees();

    return 0;
}
