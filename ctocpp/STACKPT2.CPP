#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main()
{
  char str[] = "COMPUTER";
  int len = strlen(str);

  stack<char> firstHalf, secondHalf;

  // Push first half to firstHalf stack
  for (int i = 0; i < len / 2; ++i)
  {
    firstHalf.push(str[i]);
  }

  // Push second half to secondHalf stack (we'll reverse this)
  for (int i = len / 2; i < len; ++i)
  {
    secondHalf.push(str[i]);
  }

  // Print firstHalf in correct order (re-stack to reverse again)
  stack<char> temp;
  while (!firstHalf.empty())
  {
    temp.push(firstHalf.top());
    firstHalf.pop();
  }

  while (!temp.empty())
  {
    cout << temp.top();
    temp.pop();
  }

  // Print secondHalf directly (already reversed)
  while (!secondHalf.empty())
  {
    cout << secondHalf.top();
    secondHalf.pop();
  }

  return 0;
}
