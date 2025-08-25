#include <iostream>
using namespace std;

class Student
{
private:
  char name[50];
  unsigned int Enroll;
  int marks[5];
  float avg;

public:
  void input();
  void output();
  void average();
};

void Student::input()
{
  cout << "Enter the name: ";
  cin >> name;
  cout << "Enter the Enrollment No: ";
  cin >> Enroll;
  cout << "Enter 5 marks: ";
  for (int i = 0; i < 5; i++)
  {
    cin >> marks[i];
  }
}

void Student::output()
{
  cout << "\nName: " << name;
  cout << "\nEnrollment No: " << Enroll;
  cout << "\nMarks: ";
  for (int i = 0; i < 5; i++)
  {
    cout << marks[i] << " ";
  }
  cout << "\nAverage: " << avg << endl;
}
inline void Student::average()
{
  int total = 0;
  for (int i = 0; i < 5; i++)
  {
    total = total + marks[i];
  }
  avg = total / 5.0;
}

int main()
{
  Student s;
  s.input();
  s.average();
  s.output();
  return 0;
}
