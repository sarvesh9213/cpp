#include <iostream> // For cin and cout
using namespace std;

int main() // Main function (int type in modern C++)
{
  int a, b;

  cout << "Enter number A: ";
  cin >> a;

  cout << "Enter number B: ";
  cin >> b;

  if (a > b)
  {
    cout << a << " is greater than " << b << endl;
  }
  else if (b > a)
  {
    cout << b << " is greater than " << a << endl;
  }
  else
  {
    cout << a << " is equal to " << b << endl;
  }

  return 0; // ✅ Use return 0 in modern C++
}
