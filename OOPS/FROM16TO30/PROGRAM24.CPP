#include <iostream>
#include <cstring>
using namespace std;

class Student
{
public:
  char name[50];
  int roll;
  void getStudent()
  {
    cin.ignore();
    cout << "Name: ";
    cin.getline(name, 50);
    cout << "Roll: ";
    cin >> roll;
  }
  void showStudent() { cout << "Name: " << name << "\nRoll: " << roll << endl; }
};

class Marks
{
public:
  int marks[5], total;
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
  void showMarks()
  {
    cout << "Marks: ";
    for (int i = 0; i < 5; i++)
      cout << marks[i] << " ";
    cout << "\nTotal = " << total << endl;
  }
};

class Result : public Student, public Marks
{
public:
  void showResult()
  {
    showStudent();
    showMarks();
  }
};

int main()
{
  Result res;
  res.getStudent();
  res.getMarks();
  res.showResult();
  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
