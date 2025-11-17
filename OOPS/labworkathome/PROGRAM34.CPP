#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream file;
  string word;

  file.open("sample.txt");
  if (!file)
  {
    cout << "File not found!";
    return 0;
  }

  cout << "Words in the file:\n";

  while (file >> word)
  { // reads one word at a time
    cout << word << endl;
  }

  file.close();

  cout << "\n-- Program by Sarvesh Pandey IT EVE 2ND YEAR--";
  return 0;
}
