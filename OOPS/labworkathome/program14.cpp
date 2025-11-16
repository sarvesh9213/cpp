#include <iostream>
using namespace std;

class B; // forward declaration

class A
{
  int x;

public:
  void getData(int a)
  {
    x = a;
  }
  friend void greatest(A, B);
};

class B
{
  int y;

public:
  void getData(int b)
  {
    y = b;
  }
  friend void greatest(A, B);
};

void greatest(A a, B b)
{
  if (a.x > b.y)
    cout << "Greatest = " << a.x;
  else
    cout << "Greatest = " << b.y;
}

int main()
{
  A obj1;
  B obj2;

  obj1.getData(45);
  obj2.getData(30);

  greatest(obj1, obj2);

  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
