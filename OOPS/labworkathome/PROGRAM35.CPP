#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream fin("input.txt");   // original file
  ofstream fout("output.txt"); // file without whitespaces

  if (!fin || !fout)
  {
    cout << "Error opening file!";
    return 0;
  }

  char ch;

  while (fin.get(ch))
  {
    // Skip all whitespace characters
    if (ch == ' ' || ch == '\t' || ch == '\v' ||
        ch == '\n' || ch == '\r' || ch == '\f')
    {
      continue;
    }
    else
    {
      fout << ch; // write only non-whitespace characters
    }
  }

  fin.close();
  fout.close();

  cout << "-- Program by Sarvesh Pandey --\n";
  cout << "-- BRANCH: IT EVE SEM 3 --";
  return 0;
}
