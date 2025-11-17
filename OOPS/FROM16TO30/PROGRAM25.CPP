#include <iostream>
#include <cstring>
using namespace std;

class Publication
{
public:
  char title[50];
  float price;
  void getdata()
  {
    cin.ignore();
    cout << "Title: ";
    cin.getline(title, 50);
    cout << "Price: ";
    cin >> price;
  }
  void putdata()
  {
    cout << "Title: " << title << "\nPrice: " << price << endl;
  }
};

class Book : public Publication
{
  int pages;

public:
  void getdataB()
  {
    Publication::getdata();
    cout << "Pages: ";
    cin >> pages;
  }
  void putdataB()
  {
    Publication::putdata();
    cout << "Pages: " << pages << endl;
  }
};

class Tape : public Publication
{
  float playtime;

public:
  void getdataT()
  {
    Publication::getdata();
    cout << "Play time (min): ";
    cin >> playtime;
  }
  void putdataT()
  {
    Publication::putdata();
    cout << "Play time: " << playtime << " min" << endl;
  }
};

int main()
{
  Book b;
  Tape t;
  cout << "Enter book details:\n";
  b.getdataB();
  cout << "Enter tape details:\n";
  t.getdataT();

  cout << "\nBook data:\n";
  b.putdataB();
  cout << "\nTape data:\n";
  t.putdataT();

  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
