#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream file;
  string data;

  // Write to file
  file.open("sample.txt", ios::out);
  if (!file)
  {
    cout << "Error opening file!";
    return 0;
  }
  cout << "Enter some text to write in file: ";
  getline(cin, data);

  file << data;
  file.close();

  // Read from file
  file.open("sample.txt", ios::in);
  cout << "\nData read from file:\n";

  while (getline(file, data))
  {
    cout << data << endl;
  }

  file.close();

  cout << "\n-- Program by Sarvesh Pandey --";
  return 0;
}
