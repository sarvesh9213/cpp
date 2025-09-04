#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
  string name;
  int accNumber;
  char accType; // 's' for savings, 'c' for current
  double balance;

public:
  // A. Initialize account
  void initialize(string depositorName, int number, char type, double initialBalance)
  {
    name = depositorName;
    accNumber = number;
    accType = type;
    balance = initialBalance;
  }

  // B. Deposit money
  void deposit()
  {
    double amount;
    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    cout << "Previous Balance: " << balance << endl;
    balance += amount;
    cout << "Deposited: " << amount << endl;
    cout << "New Balance: " << balance << endl;
  }

  // C. Withdraw money (only if balance after withdrawal > 10000)
  void withdraw()
  {
    double amount;
    cout << "\nEnter amount to withdraw: ";
    cin >> amount;

    cout << "Previous Balance: " << balance << endl;
    if (balance - amount >= 10000)
    {
      balance -= amount;
      cout << "Withdrawn: " << amount << endl;
      cout << "New Balance: " << balance << endl;
    }
    else
    {
      cout << "Withdrawal denied! Balance must remain above 10000." << endl;
    }
  }

  // D. Display account details
  void display()
  {
    cout << "\n--- Account Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Account Number: " << accNumber << endl;
    cout << "Account Type: " << (accType == 's' ? "Savings" : "Current") << endl;
    cout << "Balance: " << balance << endl;
  }
};

int main()
{
  BankAccount customers[10]; // For 10 customers

  // Example: Initialize first customer
  customers[0].initialize("sarvesh pandey", 1001, 's', 15000);

  // Show details, then deposit, withdraw
  customers[0].display();
  customers[0].deposit();
  customers[0].withdraw();
  customers[0].display();

  return 0;
}
