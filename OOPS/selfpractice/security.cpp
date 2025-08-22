#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
  string password; // sensitive data (hidden from outside)
  double balance;  // sensitive data

public:
  // Constructor
  BankAccount(string pass, double initialBalance)
  {
    password = pass;
    balance = initialBalance;
  }

  // Secure method to check balance
  void checkBalance(string pass)
  {
    if (pass == password)
    {
      cout << "Your Balance: ₹" << balance << endl;
    }
    else
    {
      cout << "Access Denied! Wrong Password." << endl;
    }
  }

  // Secure method to deposit money
  void deposit(string pass, double amount)
  {
    if (pass == password)
    {
      balance += amount;
      cout << "₹" << amount << " deposited successfully!" << endl;
    }
    else
    {
      cout << "Access Denied! Wrong Password." << endl;
    }
  }
};

int main()
{
  // Create account with password and initial balance
  BankAccount acc("abc123", 5000);

  // Wrong password
  acc.checkBalance("wrong");

  // Correct password
  acc.checkBalance("abc123");

  // Deposit securely
  acc.deposit("abc123", 2000);

  acc.checkBalance("abc123");

  return 0;
}
