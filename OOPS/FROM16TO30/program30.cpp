#include <iostream>
#include <cstring>
using namespace std;

class String
{
  char str[100];

public:
  String() { str[0] = '\0'; }

  void read()
  {
    cin.ignore();
    cin.getline(str, 100);
  }

  void show() { cout << str; }

  int length() { return strlen(str); }

  void tolowercase()
  {
    for (int i = 0; str[i]; i++)
      if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] + 32;
  }

  void touppercase()
  {
    for (int i = 0; str[i]; i++)
      if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;
  }

  // Operator = (copy)
  String operator=(const String &s)
  {
    strcpy(str, s.str);
    return *this;
  }

  // Operator + (concatenate)
  String operator+(const String &s)
  {
    String temp;
    strcpy(temp.str, str);
    strcat(temp.str, s.str);
    return temp;
  }

  // Operator <= (compare)
  int operator<=(const String &s)
  {
    return strcmp(str, s.str) <= 0;
  }
};

int main()
{
  String s1, s2, s3;

  cout << "Enter first string: ";
  s1.read();
  cout << "Enter second string: ";
  s2.read();

  s3 = s1 + s2; // concatenation
  cout << "\nConcatenated: ";
  s3.show();

  cout << "\nCopying s1 into s2...\n";
  s2 = s1;
  cout << "s2: ";
  s2.show();

  cout << "\nComparison (s1 <= s3): " << (s1 <= s3);

  cout << "\nLength of s1: " << s1.length();

  cout << "\n\nConverting s1 to LOWERCASE: ";
  s1.tolowercase();
  s1.show();

  cout << "\nConverting s1 to UPPERCASE: ";
  s1.touppercase();
  s1.show();

  cout << "\n\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
