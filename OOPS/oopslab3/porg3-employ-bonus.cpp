#include <iostream>
#include <string>
#include <iomanip> // for fixed and setprecision
using namespace std;

class Employee
{
private:
  int empno;
  string ename;
  double basic;
  double hra;
  double da;
  double netpay;

  void calculate()
  {
    hra = 0.10 * basic;
    da = 0.20 * basic;
    netpay = basic + hra + da;
  }

public:
  void havedata()
  {
    cout << "Enter employee number: ";
    cin >> empno;
    cout << "Enter employee name: ";
    cin >> ename;
    cout << "Enter basic salary: ";
    cin >> basic;
    calculate();
  }

  void dispdata()
  {
    cout << fixed << setprecision(2); // always show 2 decimal places
    cout << "\n--- Employee Details ---\n";
    cout << "Emp No   : " << empno << '\n';
    cout << "Name     : " << ename << '\n';
    cout << "Basic    : " << basic << '\n';
    cout << "HRA (10%): " << hra << '\n';
    cout << "DA  (20%): " << da << '\n';
    cout << "Net Pay  : " << netpay << '\n';
  }
};

int main()
{
  Employee e;
  e.havedata();
  e.dispdata();
  return 0;
}
