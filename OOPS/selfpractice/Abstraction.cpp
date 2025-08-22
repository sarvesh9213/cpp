#include <iostream>
using namespace std;

// Abstract class (contains at least one pure virtual function)
class Shape
{
public:
  // Pure virtual function - no definition here
  virtual void draw() = 0;

  // Normal function (can be used by all derived classes)
  void info()
  {
    cout << "This is a shape." << endl;
  }
};

// Derived class 1
class Circle : public Shape
{
public:
  void draw() override
  {
    cout << "Drawing a Circle" << endl;
  }
};

// Derived class 2
class Rectangle : public Shape
{
public:
  void draw() override
  {
    cout << "Drawing a Rectangle" << endl;
  }
};

int main()
{
  Shape *s1 = new Circle();    // Pointer to base class
  Shape *s2 = new Rectangle(); // Pointer to base class

  s1->draw(); // Calls Circle's draw()
  s2->draw(); // Calls Rectangle's draw()

  s1->info();
  s2->info();

  delete s1;
  delete s2;

  return 0;
}
// Explanation of abstraction here:

// 1. Shape is an abstract class because it has a pure virtual function (draw()).

// 2. You cannot create objects of Shape directly — only pointers or references.

// 3. The implementation details of draw() are hidden in the base class and only provided in derived classes (Circle, Rectangle).

// 4. The user only needs to call draw() without worrying about how it’s drawn.