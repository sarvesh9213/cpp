#include <iostream>
using namespace std;

class Date
{
  int d, m, y;

public:
  void setDate(int day, int month, int year)
  {
    d = day;
    m = month;
    y = year;
  }

  void show()
  {
    cout << d << "/" << m << "/" << y << endl;
  }

  void subtractDays(int n)
  {
    d = d - n;

    while (d <= 0)
    {
      d = d + 30;
      m = m - 1;

      if (m == 0)
      {
        m = 12;
        y = y - 1;
      }
    }
  }

  int subtractDate(Date o)
  {
    int total1 = y * 360 + m * 30 + d;
    int total2 = o.y * 360 + o.m * 30 + o.d;
    return total1 - total2;
  }
};

int main()
{
  Date d1, d2;

  d1.setDate(15, 5, 2024);
  d2.setDate(5, 5, 2024);

  d1.show();
  d1.subtractDays(10);
  d1.show();

  cout << "Difference = " << d1.subtractDate(d2);

  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
