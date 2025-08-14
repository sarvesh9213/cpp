#include <iostream>
using namespace std;

class Student
{
  char name[20]; // Data member
  int Id;        // Data member

public:
  void fun1()
  { // Member function
    cout << "Function fun1 called" << endl;
  }
};

int main()
{
  Student s1; // Object of class Student
  // Student s2, s3; // You can also create multiple objects like this
  s1.fun1(); // Calling member function

  return 0;
}
