#include <iostream>
using namespace std;

class Complex
{
  int real, imag;

public:
  // 1. No-argument constructor
  Complex()
  {
    real = 0;
    imag = 0;
  }

  // 2. One-argument constructor (both equal)
  Complex(int a)
  {
    real = a;
    imag = a;
  }

  // 3. Two-argument constructor (different values)
  Complex(int a, int b)
  {
    real = a;
    imag = b;
  }

  // Function to add two complex numbers
  Complex add(Complex c)
  {
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
  }

  void show()
  {
    cout << real << " + " << imag << "i";
  }
};

int main()
{
  Complex c1;       // 0 + 0i
  Complex c2(5);    // 5 + 5i
  Complex c3(3, 7); // 3 + 7i

  Complex sum;
  sum = c2.add(c3);

  cout << "c1 = ";
  c1.show();
  cout << "\nc2 = ";
  c2.show();
  cout << "\nc3 = ";
  c3.show();
  cout << "\nSum (c2 + c3) = ";
  sum.show();

  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
