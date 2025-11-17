#include <iostream>
using namespace std;

class LIST
{
public:
  virtual void store(int) = 0;
  virtual int retrieve() = 0;
};

class Stack : public LIST
{
  int a[50], top;

public:
  Stack() { top = -1; }
  void store(int x) { a[++top] = x; }
  int retrieve() { return a[top--]; }
};

class Queue : public LIST
{
  int a[50], f, r;

public:
  Queue()
  {
    f = 0;
    r = -1;
  }
  void store(int x) { a[++r] = x; }
  int retrieve() { return a[f++]; }
};

int main()
{
  LIST *p;

  Stack s;
  p = &s;
  p->store(10);
  p->store(20);
  cout << "Stack retrieve: " << p->retrieve() << endl;

  Queue q;
  p = &q;
  p->store(5);
  p->store(15);
  cout << "Queue retrieve: " << p->retrieve() << endl;

  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
