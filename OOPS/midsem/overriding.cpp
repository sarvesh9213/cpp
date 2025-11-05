#include <iostream>
using namespace std;

class Print
{
public:
  void display(int x)
  { // Function 1: takes int
    cout << "Integer: " << x << endl;
  }

  void display(double y)
  { // Function 2: takes double
    cout << "Double: " << y << endl;
  }
};

int main()
{
  Print obj;
  obj.display(10);   // calls display(int)
  obj.display(12.5); // calls display(double)
  return 0;
}
