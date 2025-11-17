#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
  char name[30];
  int age;
  char sex;
  float height;
  float weight;
};

int main()
{
  Student s;

  // Input student details
  cout << "Enter Name: ";
  cin.getline(s.name, 30);

  cout << "Enter Age: ";
  cin >> s.age;

  cout << "Enter Sex (M/F): ";
  cin >> s.sex;

  cout << "Enter Height: ";
  cin >> s.height;

  cout << "Enter Weight: ";
  cin >> s.weight;

  // Writing object to file (binary)
  ofstream fout("student.dat", ios::binary);
  fout.write((char *)&s, sizeof(s));
  fout.close();

  // Reading object from file
  Student temp;
  ifstream fin("student.dat", ios::binary);
  fin.read((char *)&temp, sizeof(temp));
  fin.close();

  // Display read data
  cout << "\nData read from file:\n";
  cout << "Name: " << temp.name << endl;
  cout << "Age: " << temp.age << endl;
  cout << "Sex: " << temp.sex << endl;
  cout << "Height: " << temp.height << endl;
  cout << "Weight: " << temp.weight << endl;

  cout << "\n-- Program by Sarvesh Pandey --\n";
  cout << "-- BRANCH: IT EVE SEM 3 --";
  return 0;
}
