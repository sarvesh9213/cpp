#include <iostream>
using namespace std;

class A
{ // Base class
public:
  void show()
  {
    cout << "I am Base" << endl;
  }
};

class B : public A
{ // Derived class
public:
  void show()
  { // Function overriding
    cout << "I am Derived" << endl;
  }
};

int main()
{
  B b1;
  b1.show(); // calls derived class version
  return 0;
}
