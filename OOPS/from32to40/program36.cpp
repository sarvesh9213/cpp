#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream f1("file1.txt");
  ifstream f2("file2.txt");
  ofstream fout("merged.txt");

  if (!f1 || !f2 || !fout)
  {
    cout << "Error opening files!";
    return 0;
  }

  string line;

  // Copy file1 contents
  while (getline(f1, line))
  {
    fout << line << endl;
  }

  // Copy file2 contents
  while (getline(f2, line))
  {
    fout << line << endl;
  }

  f1.close();
  f2.close();
  fout.close();

  cout << "Files merged successfully!\n";
  cout << "-- Program by Sarvesh Pandey --\n";
  cout << "-- BRANCH: IT EVE SEM 3 --";

  return 0;
}
