#include <iostream>
using namespace std;

int main()
{
  int n, pos;     // n = size of array, pos = insert position
  float arr[100]; // array (max size 100 for simplicity)
  float value;    // insert karne wala element

  // Step 1: Input array
  cout << "Enter number of elements in array: ";
  cin >> n;
  cout << "Enter " << n << " elements (float values):\n";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // Step 2: Input position + value
  cout << "Enter position where you want to insert (1 to " << n + 1 << "): ";
  cin >> pos;

  cout << "Enter value to insert: ";
  cin >> value;

  // Step 3: Shift elements (right side)
  // Array index 0-based hai, but user 1-based position de raha hai
  for (int i = n; i >= pos; i--)
  {
    arr[i] = arr[i - 1]; // right shift
  }

  // Step 4: Insert new value at given position
  arr[pos - 1] = value;

  // Step 5: Print upgraded array
  cout << "Updated array:\n";
  for (int i = 0; i <= n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
