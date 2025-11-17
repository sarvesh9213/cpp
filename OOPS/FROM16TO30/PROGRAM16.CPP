#include <iostream>
using namespace std;

class Date
{
  int d, m, y;

public:
  void setDate(int day, int month, int year)
  {
    d = day;
    m = month;
    y = year;
  }

  void show()
  {
    cout << d << "/" << m << "/" << y;
  }
};

class Patient
{
  char name[50];
  char disease[50];
  Date adm, dis; // admission & discharge dates

public:
  void enter()
  {
    cout << "Enter Patient Name: ";
    cin.ignore();
    cin.getline(name, 50);

    cout << "Enter Disease: ";
    cin.getline(disease, 50);

    int d, m, y;
    cout << "Enter Admission Date (dd mm yyyy): ";
    cin >> d >> m >> y;
    adm.setDate(d, m, y);

    cout << "Enter Discharge Date (dd mm yyyy): ";
    cin >> d >> m >> y;
    dis.setDate(d, m, y);
  }

  void display()
  {
    cout << "\nName: " << name;
    cout << "\nDisease: " << disease;
    cout << "\nAdmission Date: ";
    adm.show();
    cout << "\nDischarge Date: ";
    dis.show();
    cout << "\n-----------------------------";
  }
};

int main()
{
  int n;
  cout << "Enter number of patients: ";
  cin >> n;

  Patient p[50]; // up to 50 patients

  for (int i = 0; i < n; i++)
  {
    cout << "\n--- Enter Details of Patient " << i + 1 << " ---\n";
    p[i].enter();
  }

  cout << "\n\n****** HOSPITAL PATIENT LIST ******\n";
  for (int i = 0; i < n; i++)
  {
    p[i].display();
  }

  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
