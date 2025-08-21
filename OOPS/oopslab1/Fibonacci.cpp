#include <iostream>
using namespace std;
class Fibonacci
{
private:
  int n;
  int *arr; // Number of terms in the Fibonacci series
public:
  void input();
  void output();
  void generateFibonacci();
};
void Fibonacci ::input()
{
  cout << "Enter the number of terms in the Fibonacci series: ";
  cin >> n;
  arr = new int[n]; // Dynamically allocate memory for n terms
}
void Fibonacci ::generateFibonacci()
{
  arr[0] = 0; // First term
  if (n > 1)
  {
    arr[1] = 1; // Second term
    for (int i = 2; i < n; i++)
    {
      arr[i] = arr[i - 1] + arr[i - 2]; // Generate the series
    }
  }
}
void Fibonacci ::output()
{
  cout << "Fibonacci Series: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " "; // Print the series
  }
  cout << endl;
  delete[] arr; // Free dynamically allocated memory
}
int main()
{
  Fibonacci fib;
  fib.input();             // Input number of terms
  fib.generateFibonacci(); // Generate Fibonacci series
  fib.output();            // Output the series
  return 0;
}