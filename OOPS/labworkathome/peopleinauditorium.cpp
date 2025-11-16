#include <iostream>
using namespace std;

class Auditorium
{
  static int count;

public:
  void enter()
  {
    count++;
    cout << "Person Entered. Total = " << count << endl;
  }
};

int Auditorium::count = 0;

int main()
{
  Auditorium a;
  a.enter();
  a.enter();
  a.enter();

  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
