#include <iostream>  // For input/output (cin, cout)
using namespace std; // To avoid writing std:: repeatedly

// Employee class definition
class Employee
{
private:
  int id;        // Employee ID (private data member)
  string name;   // Employee Name (private data member)
  double salary; // Employee Salary (private data member)

public:
  // Constructor to initialize employee details
  Employee(int i, string n, double s)
  {
    id = i;     // Assign id
    name = n;   // Assign name
    salary = s; // Assign salary
  }

  // Getter function to return salary
  double getSalary()
  {
    return salary; // Returns employee's salary
  }

  // Function to display employee details
  void display()
  {
    cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
  }
};

// Main function
int main()
{
  int n; // Variable to store number of employees

  // Ask user how many employees they want to enter
  cout << "Enter number of employees: ";
  cin >> n;

  // Array of pointers to Employee objects (dynamic allocation later)
  Employee *employees[n];

  double totalSalary = 0.0; // To store sum of all salaries

  // Taking input for each employee
  for (int i = 0; i < n; i++)
  {
    int id;        // Temporary variable for id
    string name;   // Temporary variable for name
    double salary; // Temporary variable for salary

    // Input employee details
    cout << "\nEnter details for Employee " << (i + 1) << endl;
    cout << "ID: ";
    cin >> id;
    cout << "Name: ";
    cin >> name;
    cout << "Salary: ";
    cin >> salary;

    // Dynamically create Employee object and store its address in array
    employees[i] = new Employee(id, name, salary);

    // Add salary of this employee to totalSalary
    totalSalary += employees[i]->getSalary();
    // Since employees[i] is a pointer, we cannot use . directly (like employees[i].getSalary()).
    // Instead, we use the arrow operator (->) which means:
    // “Go to the object this pointer points to, and call its function”.
  }

  // Displaying all employee details
  cout << "\nEmployee Details:\n";
  for (int i = 0; i < n; i++)
  {
    employees[i]->display(); // Call display function of Employee
  }

  // Calculate average salary
  double avgSalary = totalSalary / n;

  // Print average salary
  cout << "\nAverage Salary of all employees = " << avgSalary << endl;

  // Free dynamically allocated memory to avoid memory leaks
  for (int i = 0; i < n; i++)
  {
    delete employees[i]; // Delete each Employee object
  }

  return 0; // Program ends successfully
}
