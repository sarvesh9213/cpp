#include <iostream>
#include <cstring>
using namespace std;

class String
{
  char *str;

public:
  // Default constructor
  String()
  {
    str = NULL;
  }

  // One-argument constructor (char array)
  String(const char *s)
  {
    str = new char[strlen(s) + 1];
    strcpy(str, s);
  }

  // Copy constructor (String object)
  String(const String &obj)
  {
    if (obj.str == NULL)
      str = NULL;
    else
    {
      str = new char[strlen(obj.str) + 1];
      strcpy(str, obj.str);
    }
  }

  // Display function
  void show()
  {
    if (str)
      cout << str;
    else
      cout << "NULL";
  }

  // Destructor
  ~String()
  {
    delete[] str;
  }
};

int main()
{
  String name1;         // str → NULL
  String name2 = "ABC"; // one-argument constructor
  String name3 = name2; // copy constructor

  cout << "name1: ";
  name1.show();
  cout << "\nname2: ";
  name2.show();
  cout << "\nname3: ";
  name3.show();

  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
