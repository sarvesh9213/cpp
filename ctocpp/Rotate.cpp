#include <iostream>
#include <algorithm>
using namespace std;

void modify(int *arr)
{
  // Rotating subarrays
  rotate(arr, arr + 3, arr + 5); // rotates [3,4]
  rotate(arr, arr + 2, arr + 4); // rotates [2,3]
}

int main()
{
  int iarr[5];

  // Fill array with 1 to 5
  for (int i = 0; i < 5; i++)
  {
    iarr[i] = i + 1;
  }

  // Call modify after array is fully initialized
  modify(iarr);

  // Print final array
  for (int i = 0; i < 5; ++i)
  {
    cout << iarr[i] << " ";
  }

  return 0;
}
