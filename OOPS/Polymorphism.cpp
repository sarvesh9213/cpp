#include <iostream>
using namespace std;

// ---- Compile-time polymorphism: Function Overloading ----
class MathOperation
{
public:
  // Adding two integers
  int add(int a, int b)
  {
    return a + b;
  }

  // Adding three integers
  int add(int a, int b, int c)
  {
    return a + b + c;
  }

  // Adding two doubles
  double add(double a, double b)
  {
    return a + b;
  }
};

// ---- Runtime polymorphism: Function Overriding ----
class Animal
{
public:
  virtual void sound()
  { // virtual keyword enables runtime polymorphism
    cout << "Animal makes a sound" << endl;
  }
};

class Dog : public Animal
{
public:
  void sound() override
  {
    cout << "Dog barks" << endl;
  }
};

class Cat : public Animal
{
public:
  void sound() override
  {
    cout << "Cat meows" << endl;
  }
};

int main()
{
  // ---- Compile-time polymorphism ----
  MathOperation math;
  cout << "Sum of 2 integers: " << math.add(5, 10) << endl;
  cout << "Sum of 3 integers: " << math.add(1, 2, 3) << endl;
  cout << "Sum of doubles: " << math.add(2.5, 3.5) << endl;

  cout << "\n---- Runtime polymorphism ----" << endl;
  Animal *animalPtr; // pointer to base class

  Dog dog;
  Cat cat;

  animalPtr = &dog;
  animalPtr->sound(); // Output: Dog barks

  animalPtr = &cat;
  animalPtr->sound(); // Output: Cat meows

  return 0;
}

// Explanation of polymorphism here: