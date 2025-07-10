#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main()
{
  char str[10] = "COMPUTER";
  stack<char> s1, s2;
  int i;

  // Push all characters into s1
  for (i = 0; i < strlen(str); i++)
  {
    s1.push(str[i]);
  }

  // Move characters from s1 to s2
  while (!s1.empty())
  {
    s2.push(s1.top());
    s1.pop();
  }

  // Print characters from s2 (original order)
  while (!s2.empty())
  {
    cout << s2.top();
    s2.pop();
  }

  return 0;
}
