#include <iostream>
using namespace std;

class Demo
{
public:
  static int a;
  static int b;
};

// Multiple initialization using scope resolution operator
int Demo::a = 10;
int Demo::b = 20;

int main()
{
  cout << "Initial values:" << endl;
  cout << "a = " << Demo::a << endl;
  cout << "b = " << Demo::b << endl;

  // Updating values
  Demo::a = 50;
  Demo::b = 100;

  cout << "\nAfter updating:" << endl;
  cout << "a = " << Demo::a << endl;
  cout << "b = " << Demo::b << endl;
  cout << "sarvesh pandey IT-EVE" << endl;

  return 0;
}
