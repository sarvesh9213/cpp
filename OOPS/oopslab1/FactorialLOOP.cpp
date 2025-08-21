#include <iostream>
using namespace std;
int factorial(int n)
{
  int fact = 1;
  // Initialize fact to 1
  if (n <= 1)
  {
    return 1;
  }
  else
  {
    for (int i = 1; i <= n; i++)
    {
      fact = fact * i;
    }
    cout << "factorial of " << n << " is " << fact << endl;
  }
}
int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;
  if (num < 0)
  {
    cout << "Factorial is not defined for negative numbers." << endl;
  }
  else
  {
    factorial(num);
  }
  return 0;
}