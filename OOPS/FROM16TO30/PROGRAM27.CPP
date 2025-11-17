#include <iostream>
using namespace std;

class Shape
{
public:
  virtual void area() {}
};

class Triangle : public Shape
{
  float b, h;

public:
  void get()
  {
    cout << "Base & Height: ";
    cin >> b >> h;
  }
  void area() { cout << "Triangle Area = " << (0.5 * b * h) << endl; }
};

class Rectangle : public Shape
{
  float l, w;

public:
  void get()
  {
    cout << "Length & Width: ";
    cin >> l >> w;
  }
  void area() { cout << "Rectangle Area = " << (l * w) << endl; }
};

class Circle : public Shape
{
  float r;

public:
  void get()
  {
    cout << "Radius: ";
    cin >> r;
  }
  void area() { cout << "Circle Area = " << (3.14 * r * r) << endl; }
};

int main()
{
  Shape *p;
  Triangle t;
  Rectangle r;
  Circle c;

  cout << "Triangle:\n";
  t.get();
  p = &t;
  p->area();

  cout << "\nRectangle:\n";
  r.get();
  p = &r;
  p->area();

  cout << "\nCircle:\n";
  c.get();
  p = &c;
  p->area();

  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
