#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX_EMPLOYEES = 100; // Maximum number of employees

class Employee {
private:
    int id;
    string name;
    string department;
    double salary;

public:
    Employee() : id(0), name(""), department(""), salary(0.0) {} // Default constructor

    void setEmployee(int empId, string empName, string empDept, double empSalary) {
        id = empId;
        name = empName;
        department = empDept;
        salary = empSalary;
    }

    int getId() const {
        return id;
    }

    string getName() const {
        return name;
    }

    string getDepartment() const {
        return department;
    }

    double getSalary() const {
        return salary;
    }

    void setName(string newName) {
        name = newName;
    }

    void setDepartment(string newDept) {
        department = newDept;
    }

    void setSalary(double newSalary) {
        salary = newSalary;
    }

    void display() const {
        cout << setw(10) << id << setw(20) << name << setw(20) << department << setw(15) << salary << endl;
    }
};

class EmployeeManagement {
private:
    Employee employees[MAX_EMPLOYEES];
    int employeeCount; // To keep track of the number of employees

public:
    EmployeeManagement() : employeeCount(0) {}

    void addEmployee() {
        if (employeeCount >= MAX_EMPLOYEES) {
            cout << "Cannot add more employees. Employee limit reached!" << endl;
            return;
        }

        int id;
        string name, department;
        double salary;

        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore(); // Clear the input buffer
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Employee Department: ";
        getline(cin, department);
        cout << "Enter Employee Salary: ";
        cin >> salary;

        employees[employeeCount].setEmployee(id, name, department, salary);
        employeeCount++;

        cout << "Employee added successfully!\n";
    }

    void displayEmployees() const {
        if (employeeCount == 0) {
            cout << "No employees found.\n";
            return;
        }

        cout << setw(10) << "ID" << setw(20) << "Name" << setw(20) << "Department" << setw(15) << "Salary" << endl;
        cout << "-----------------------------------------------------------------------\n";

        for (int i = 0; i < employeeCount; i++) {
            employees[i].display();
        }
    }

    void searchEmployee() const {
        int id;
        cout << "Enter Employee ID to search: ";
        cin >> id;

        for (int i = 0; i < employeeCount; i++) {
            if (employees[i].getId() == id) {
                cout << "Employee Found:\n";
                employees[i].display();
                return;
            }
        }
        cout << "Employee not found.\n";
    }

    void deleteEmployee() {
        int id;
        cout << "Enter Employee ID to delete: ";
        cin >> id;

        for (int i = 0; i < employeeCount; i++) {
            if (employees[i].getId() == id) {
                // Shift all subsequent employees one position to the left
                for (int j = i; j < employeeCount - 1; j++) {
                    employees[j] = employees[j + 1];
                }
                employeeCount--;
                cout << "Employee deleted successfully!\n";
                return;
            }
        }
        cout << "Employee not found.\n";
    }

    void updateEmployee() {
        int id;
        cout << "Enter Employee ID to update: ";
        cin >> id;

        for (int i = 0; i < employeeCount; i++) {
            if (employees[i].getId() == id) {
                string name, department;
                double salary;

                cin.ignore(); // Clear the input buffer
                cout << "Enter New Name: ";
                getline(cin, name);
                cout << "Enter New Department: ";
                getline(cin, department);
                cout << "Enter New Salary: ";
                cin >> salary;

                employees[i].setName(name);
                employees[i].setDepartment(department);
                employees[i].setSalary(salary);

                cout << "Employee updated successfully!\n";
                return;
            }
        }
        cout << "Employee not found.\n";
    }
};

int main() {
    EmployeeManagement system;
    int choice;

    do {
        cout << "\n=== Employee Management System ===\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Delete Employee\n";
        cout << "5. Update Employee\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                system.addEmployee();
                break;
            case 2:
                system.displayEmployees();
                break;
            case 3:
                system.searchEmployee();
                break;
            case 4:
                system.deleteEmployee();
                break;
            case 5:
                system.updateEmployee();
                break;
            case 6:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
