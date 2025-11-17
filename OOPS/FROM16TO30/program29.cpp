#include <iostream>
using namespace std;

class Date
{
  int d, m, y;

public:
  void set(int a, int b, int c)
  {
    d = a;
    m = b;
    y = c;
  }

  void show()
  {
    cout << d << "/" << m << "/" << y << endl;
  }

  // Overloading unary ++ (prefix)
  void operator++()
  {
    d++;

    if (d > 30)
    { // assuming 30 days in all months
      d = 1;
      m++;
    }
    if (m > 12)
    {
      m = 1;
      y++;
    }
  }
};

int main()
{
  Date dt;
  dt.set(30, 12, 2024);

  cout << "Current Date: ";
  dt.show();

  ++dt; // increment date

  cout << "Incremented Date: ";
  dt.show();

  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
