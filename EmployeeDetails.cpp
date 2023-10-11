#include <iostream>
#include <string>

class Employee {
private:
    int id;
    std::string name;
    double salary;

public:
    void setEmployee(int empID, std::string empName, double empSalary) {
        id = empID;
        name = empName;
        salary = empSalary;
    }

    void setEmployee(int empID, std::string empName) {
        id = empID;
        name = empName;
        salary = 0.0; // Set default salary
    }

    void displayEmployee() {
        std::cout << "Employee ID: " << id << std::endl;
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "Employee Salary: Rs" << salary << std::endl;
    }
};

int main() {
    Employee emp1, emp2;


    emp1.setEmployee(101, "Jaideep", 50000.0);
    emp2.setEmployee(102, "dyanda");

    std::cout << "Employee 1 Details:" << std::endl;
    emp1.displayEmployee();

    std::cout << "\nEmployee 2 Details:" << std::endl;
    emp2.displayEmployee();

    return 0;
}
