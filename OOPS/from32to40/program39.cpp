#include <iostream>
#include <stdexcept>
using namespace std;

class SafeArray
{
  int *arr;
  int size;

public:
  SafeArray(int n) : size(n) { arr = new int[n]; }
  ~SafeArray() { delete[] arr; }

  void set(int idx, int val)
  {
    if (idx < 0 || idx >= size)
      throw out_of_range("Index out of range");
    arr[idx] = val;
  }

  int get(int idx)
  {
    if (idx < 0 || idx >= size)
      throw out_of_range("Index out of range");
    return arr[idx];
  }
};

int main()
{
  SafeArray a(5);
  for (int i = 0; i < 5; ++i)
    a.set(i, i + 1);

  try
  {
    cout << "Element at 2 = " << a.get(2) << endl;
    cout << "Trying to access index 10...\n";
    cout << a.get(10) << endl; // will throw
  }
  catch (const exception &e)
  {
    cout << "Exception: " << e.what() << endl;
  }

  cout << "\n-- Program by Sarvesh Pandey --\n";
  cout << "-- BRANCH: IT EVE SEM 3 --";
  return 0;
}
