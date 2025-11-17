#include <iostream>
#include <cstring>
using namespace std;

class Student
{
  int roll_no;
  char name[50];
  char class_st[20];
  int marks[5];
  float percentage;

  void calculate()
  {
    int sum = 0;
    for (int i = 0; i < 5; i++)
      sum += marks[i];
    percentage = sum / 5.0;
  }

public:
  void Readmarks()
  {
    cout << "Roll No: ";
    cin >> roll_no;
    cin.ignore();

    cout << "Name: ";
    cin.getline(name, 50);

    cout << "Class: ";
    cin.getline(class_st, 20);

    cout << "Enter 5 Marks: ";
    for (int i = 0; i < 5; i++)
      cin >> marks[i];

    calculate();
  }

  void Displaydata()
  {
    cout << "\nRoll No: " << roll_no;
    cout << "\nName: " << name;
    cout << "\nClass: " << class_st;
    cout << "\nPercentage: " << percentage;
  }
};

int main()
{
  Student s;
  s.Readmarks();
  s.Displaydata();

  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
