#include <iostream>
using namespace std;

// A void function: it performs an action but returns nothing
void greetUser(string name)
{
  cout << "Hello, " << name << "! Welcome to C++ programming." << endl;
}

// Another void function: just prints a line
void printLine()
{
  cout << "---------------------------" << endl;
}

int main()
{
  // Using the void functions
  printLine();
  greetUser("Sarvesh");
  printLine();

  return 0; // main() returns int, not void
}
// cd "c:\Users\sarve\first-react-app\cpp\OOPS\" ; if ($?) { g++ void0bytes.cpp -o void0bytes } ; if ($?) { .\void0bytes }
// ---------------------------
// Hello, Sarvesh! Welcome to C++ programming.
// ---------------------------
// PS C:\Users\sarve\first-react-app\cpp\OOPS>