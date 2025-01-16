#include <iostream>
using namespace std;
class Employee {
    public:
    virtual double calculateSalary() const = 0; // Pure virtual function
};
class Class1_Employee : public Employee {
    public:
    double calculateSalary() const override {
    // Define salary calculation for Class1_Employee
    // For example:
    return 650000.0;
    }
};
class Class2_Employee : public Employee {
    public:
    double calculateSalary() const override {
    // Define salary calculation for Class2_Employee
    // For example:
    return 560000.0;
    }
};
class Class3_Employee : public Employee {
    public:
    double calculateSalary() const override {
    // Define salary calculation for Class3_Employee
    // For example:
    return 970000.0;
}
};
int main() {
    // Example usage
    Class1_Employee employee1;
    Class2_Employee employee2;
    Class3_Employee employee3;
    cout << "Salary of Class1_Employee: " <<
    employee1.calculateSalary() << endl;
    cout << "Salary of Class2_Employee: " <<
    employee2.calculateSalary() << endl;
    cout << "Salary of Class3_Employee: " <<
    employee3.calculateSalary() << endl;
    return 0;
}
