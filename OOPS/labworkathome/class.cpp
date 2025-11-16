#include <iostream>
#include <string>
using namespace std;

class Student
{
  string name, stream;
  int roll, marks[5];
  float avg;

public:
  void input()
  {
    cout << "Student Name: Sarvesh Pandey\n";
    cout << "Course: B.Tech IT\n";
    cout << "Year: 2nd Year\n";
    cout << "---------------------------------------\n";

    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Roll: ";
    cin >> roll;

    cout << "Enter 5 Marks: ";
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
      cin >> marks[i];
      sum += marks[i];
    }
    avg = sum / 5.0;
  }

  void assignStream()
  {
    if (avg >= 96)
      stream = "Computer Science";
    else if (avg >= 91)
      stream = "Electronics";
    else if (avg >= 86)
      stream = "Mechanical";
    else if (avg >= 81)
      stream = "Electrical";
    else if (avg >= 76)
      stream = "Chemical";
    else if (avg >= 71)
      stream = "Civil";
    else
      stream = "No Stream";
  }

  void display()
  {
    cout << "\nName: " << name
         << "\nRoll: " << roll
         << "\nAverage: " << avg
         << "\nStream Assigned: " << stream << endl;
  }
};

int main()
{
  Student s;
  s.input();
  s.assignStream();
  s.display();
  return 0;
}
