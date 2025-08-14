#include <iostream>
using namespace std;

class Student
{
private:
  // Private data members (cannot be accessed directly outside the class)
  string name;
  int age;

public:
  // Setter functions - used to set values safely
  void setName(string n)
  {
    name = n;
  }

  void setAge(int a)
  {
    if (a > 0)
    { // Simple validation
      age = a;
    }
    else
    {
      cout << "Invalid age!" << endl;
    }
  }

  // Getter functions - used to get values
  string getName()
  {
    return name;
  }

  int getAge()
  {
    return age;
  }
};

int main()
{
  Student s1;

  // Setting values using setter functions
  s1.setName("Rahul");
  s1.setAge(20);

  // Getting values using getter functions
  cout << "Name: " << s1.getName() << endl;
  cout << "Age: " << s1.getAge() << endl;

  return 0;
}
//  How it shows encapsulation:

// 1. Data members (name, age) are private → they are hidden from outside the class.

// 2. Setter & getter functions (setName, setAge, getName, getAge) control how data is accessed or modified.

// 3. This protects data from direct modification and allows validation before changing it.