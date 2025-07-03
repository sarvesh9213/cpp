#include <iostream>  // Input-output stream include kar rahe hain
using namespace std; // Standard namespace use kar rahe hain

int main()
{
  char op;           // Operator store karne ke liye variable (like + - * /)
  double num1, num2; // Do numbers jinke upar operation hoga

  // User se input le rahe hain
  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter an operator (+, -, *, /): ";
  cin >> op;

  cout << "Enter second number: ";
  cin >> num2;

  // Else if ka use karke condition check kar rahe hain
  if (op == '+')
  {
    cout << "Result: " << num1 + num2 << endl;
  }
  else if (op == '-')
  {
    cout << "Result: " << num1 - num2 << endl;
  }
  else if (op == '*')
  {
    cout << "Result: " << num1 * num2 << endl;
  }
  else if (op == '/')
  {
    if (num2 != 0) // Divide by zero check kar rahe hain
      cout << "Result: " << num1 / num2 << endl;
    else
      cout << "Error: Division by zero is not allowed." << endl;
  }
  else
  {
    // Agar galat operator diya to
    cout << "Invalid operator entered!" << endl;
  }

  return 0; // Program end
}
