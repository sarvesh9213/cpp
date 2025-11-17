#include <iostream>
#include <cstring>
using namespace std;

struct Name
{
  char first[40];
  char mid[40];
  char last[60];
};

struct Phone
{
  char area[4];
  char exch[4];
  char numb[6];
};

class p_rec
{
  Name n;
  Phone p;

public:
  p_rec()
  { // constructor
    strcpy(n.first, "");
    strcpy(n.mid, "");
    strcpy(n.last, "");
    strcpy(p.area, "");
    strcpy(p.exch, "");
    strcpy(p.numb, "");
  }

  void enter()
  {
    cin.ignore();
    cout << "First Name: ";
    cin.getline(n.first, 40);

    cout << "Middle Name: ";
    cin.getline(n.mid, 40);

    cout << "Last Name: ";
    cin.getline(n.last, 60);

    cout << "Area Code: ";
    cin.getline(p.area, 4);

    cout << "Exchange: ";
    cin.getline(p.exch, 4);

    cout << "Number: ";
    cin.getline(p.numb, 6);
  }

  void show()
  {
    cout << "\nName: " << n.first << " " << n.mid << " " << n.last;
    cout << "\nPhone: (" << p.area << ") " << p.exch << "-" << p.numb;
  }
};

int main()
{
  p_rec ob;
  ob.enter();
  ob.show();

  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
