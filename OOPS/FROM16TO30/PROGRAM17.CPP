#include <iostream>
#include <cstring>
using namespace std;

class Serial
{
  int code;
  char title[20];
  int duration;
  int noofepisodes;

public:
  Serial()
  {
    duration = 30;
    noofepisodes = 10;
  }

  void Newserial()
  {
    cout << "Enter Serial Code: ";
    cin >> code;
    cin.ignore();
    cout << "Enter Title: ";
    cin.getline(title, 20);
  }

  void Otherentries(int d, int n)
  {
    duration = d;
    noofepisodes = n;
  }

  void Dispdata()
  {
    cout << "\nCode: " << code;
    cout << "\nTitle: " << title;
    cout << "\nDuration: " << duration;
    cout << "\nEpisodes: " << noofepisodes;
  }
};

int main()
{
  Serial s;
  s.Newserial();
  s.Otherentries(45, 25);
  s.Dispdata();

  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
