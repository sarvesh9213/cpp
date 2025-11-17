#include <iostream>
#include <cstring>
using namespace std;

class Date
{
  int d, m, y;

public:
  void set(int a, int b, int c)
  {
    d = a;
    m = b;
    y = c;
  }
  void show() { cout << d << "/" << m << "/" << y; }
};

class Patient
{
public:
  char name[50];
  char disease[30];
  Date adm, dis;
  void enter()
  {
    cin.ignore();
    cout << "Name: ";
    cin.getline(name, 50);
    cout << "Disease: ";
    cin.getline(disease, 30);
    int d, m, y;
    cout << "Admission (dd mm yyyy): ";
    cin >> d >> m >> y;
    adm.set(d, m, y);
    cout << "Discharge (dd mm yyyy): ";
    cin >> d >> m >> y;
    dis.set(d, m, y);
  }
  void showBasic()
  {
    cout << "\nName: " << name << "\nDisease: " << disease << "\nAdmission: ";
    adm.show();
    cout << "\nDischarge: ";
    dis.show();
  }
};

class Pediatric : public Patient
{
  int age;

public:
  void enterAll()
  {
    Patient::enter();
    cout << "Age: ";
    cin >> age;
  }
  int getAge() { return age; }
  void showIfPediatric()
  {
    if (age < 12)
    {
      showBasic();
      cout << "\nAge: " << age << "\n---\n";
    }
  }
};

int main()
{
  int n;
  cout << "Number of patients: ";
  cin >> n;
  Pediatric p[50];
  for (int i = 0; i < n; i++)
  {
    cout << "\nEnter patient " << i + 1 << ":\n";
    p[i].enterAll();
  }
  cout << "\n--- Pediatric patients (<12 yrs) ---\n";
  for (int i = 0; i < n; i++)
    p[i].showIfPediatric();

  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
