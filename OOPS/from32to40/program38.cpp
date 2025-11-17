#include <iostream>
using namespace std;

template <class T>
class Bigger
{
  T a, b;

public:
  Bigger(T x, T y)
  { // Constructor
    a = x;
    b = y;
    cout << "Constructor called\n";
  }

  T getBigger()
  { // Special member function
    return (a > b) ? a : b;
  }

  ~Bigger()
  { // Destructor
    cout << "Destructor called\n";
  }
};

int main()
{
  int x, y;
  cout << "Enter two numbers: ";
  cin >> x >> y;

  Bigger<int> obj(x, y);

  cout << "Bigger number = " << obj.getBigger() << endl;

  cout << "-- Program by Sarvesh Pandey --\n";
  cout << "-- BRANCH: IT EVE SEM 3 --";
  return 0;
}
