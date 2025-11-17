#include <iostream>
#include <cstring>
using namespace std;

class Student
{
protected:
  char name[50];
  int roll;

public:
  void getStudent()
  {
    cin.ignore();
    cout << "Name: ";
    cin.getline(name, 50);
    cout << "Roll: ";
    cin >> roll;
  }
  void showStudent()
  {
    cout << "Name: " << name << "\nRoll: " << roll << endl;
  }
};

class Exam : public Student
{
protected:
  int marks[5];
  int total;

public:
  void getMarks()
  {
    total = 0;
    cout << "Enter 5 marks: ";
    for (int i = 0; i < 5; i++)
    {
      cin >> marks[i];
      total += marks[i];
    }
  }
};

class Result : public Exam
{
public:
  void showResult()
  {
    showStudent();
    cout << "Marks: ";
    for (int i = 0; i < 5; i++)
      cout << marks[i] << " ";
    cout << "\nTotal = " << total << endl;
  }
};

int main()
{
  Result r;
  r.getStudent();
  r.getMarks();
  r.showResult();
  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
