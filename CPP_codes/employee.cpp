#include <iostream>
using namespace std;

// Base Class: Employee
class Employee {
public:
    string name;
    int empID;
    float salary;

    void getEmployeeData() {
        cout << "\n Enter Employee Details:\n";
        cout << "  Name: ";
        cin.ignore(); // clear input buffer
        getline(cin, name);
        cout << "  Employee ID: ";
        cin >> empID;
        cout << "  Salary: ₹";
        cin >> salary;
    }

    void displayEmployeeData() {
        cout << "\n Employee Info:\n";
        cout << "   Name       : " << name << endl;
        cout << "   Employee ID: " << empID << endl;
        cout << "   Salary     : ₹" << salary << endl;
    }
};

// Derived Class: Manager
class Manager : public Employee {
public:
    string department;

    void getManagerData() {
        getEmployeeData();  // Call base class function
        cout << "  Department: ";
        cin.ignore(); // clear input buffer
        getline(cin, department);
    }

    void displayManagerData() {
        displayEmployeeData();  // Call base class function
        cout << "   Department : " << department << endl;
    }
};

int main() {
    Manager mgr;

    cout << " Welcome to the Manager Details System\n";
    cout << "----------------------------------------" << endl;

    // Input and display
    mgr.getManagerData();
    cout << "\n Here is the Manager's Full Record:";
    mgr.displayManagerData();

    cout << "\n Note: Manager is also an Employee (Inheritance used) " << endl;

    return 0;
}
