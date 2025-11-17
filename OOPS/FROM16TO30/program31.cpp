#include <iostream>
#include <cstdlib>
using namespace std;

class Sample
{
  int x;

public:
  // Overload new
  void *operator new(size_t size)
  {
    cout << "Custom new called\n";
    void *p = malloc(size);
    return p;
  }

  // Overload delete
  void operator delete(void *p)
  {
    cout << "Custom delete called\n";
    free(p);
  }

  void set(int a) { x = a; }
  void show() { cout << "Value = " << x << endl; }
};

int main()
{
  Sample *obj = new Sample; // calls overloaded new
  obj->set(50);
  obj->show();

  delete obj; // calls overloaded delete

  cout << "\n--- Sarvesh Pandey | B.Tech IT | 2nd Year ---";
  return 0;
}
