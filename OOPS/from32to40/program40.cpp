#include <iostream>
#include <string>
using namespace std;

// User-defined exception class
class MyException
{
  string msg;

public:
  MyException(string m) : msg(m) {}
  const char *what() const { return msg.c_str(); }
};

// Function that checks a number
void checkNumber(int x)
{
  if (x < 0)
    throw MyException("Negative numbers are not allowed!");

  if (x == 0)
    throw MyException("Zero is not allowed!");

  if (x > 1000)
    throw MyException("Number is too large! Enter below 1000.");

  cout << "Valid number entered: " << x << endl;
}

int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;

  try
  {
    checkNumber(num); // Calling the function that may throw
    cout << "Processing completed successfully.\n";
  }
  catch (const MyException &e)
  {
    cout << "User-Defined Exception Caught: " << e.what() << endl;
  }

  cout << "\n-- Program by Sarvesh Pandey --\n";
  cout << "-- BRANCH: IT EVE SEM 3 --";
  return 0;
}
