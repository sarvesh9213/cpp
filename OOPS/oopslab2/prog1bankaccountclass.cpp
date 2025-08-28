#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
  string name;    // Name of depositor
  int accNumber;  // Account number
  char accType;   // 's' for savings, 'c' for current
  double balance; // Balance amount

public:
  // A. To initialize
  void initialize(string n, int accNo, char type, double bal)
  {
    name = n;
    accNumber = accNo;
    accType = type;
    balance = bal;
  }

  // B. To deposit money
  void deposit(double amount)
  {
    balance += amount;
    cout << "Amount deposited successfully! New balance = " << balance << endl;
  }

  // C. For withdrawal (only if balance after withdrawal > 10000)
  void withdraw(double amount)
  {
    if (balance - amount >= 1000)
    {
      balance -= amount;
      cout << "Withdrawal successful! Remaining balance = " << balance << endl;
    }
    else
    {
      cout << "Withdrawal denied! Balance must remain above 1000." << endl;
    }
  }

  // D. To display the data members
  void display()
  {
    cout << "----------------------------------" << endl;
    cout << "Name of Depositor : " << name << endl;
    cout << "Account Number    : " << accNumber << endl;
    cout << "Account Type      : " << (accType == 's' ? "Savings" : "Current") << endl;
    cout << "Balance Amount    : " << balance << endl;
  }
};

int main()
{
  // Array of 10 customers
  BankAccount customers[10];

  // Example initialization for 2 customers (you can extend for 10)
  customers[0].initialize("sarvesh pandey", 1001, 's', 50000);
  customers[1].initialize("saurav kumar", 1002, 'c', 25000);

  // Sample operations
  customers[0].deposit(5000);
  customers[0].withdraw(12000);
  customers[0].display();

  customers[1].withdraw(45000); // will fail because < 10000 left
  customers[1].display();

  return 0;
}
