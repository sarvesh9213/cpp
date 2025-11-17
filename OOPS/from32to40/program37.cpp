#include <iostream>
using namespace std;

template <class T>
class DLL
{
  struct Node
  {
    T data;
    Node *prev, *next;
    Node(T d) : data(d), prev(NULL), next(NULL) {}
  };
  Node *head, *tail;

public:
  DLL() : head(NULL), tail(NULL) {}

  void insertEnd(T x)
  {
    Node *n = new Node(x);
    if (!head)
      head = tail = n;
    else
    {
      tail->next = n;
      n->prev = tail;
      tail = n;
    }
  }

  void displayForward()
  {
    Node *p = head;
    while (p)
    {
      cout << p->data << " ";
      p = p->next;
    }
  }

  void displayBackward()
  {
    Node *p = tail;
    while (p)
    {
      cout << p->data << " ";
      p = p->prev;
    }
  }
};

int main()
{
  DLL<int> d;
  int n, x;

  cout << "Enter number of elements: ";
  cin >> n;
  cout << "Enter elements:\n";

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    d.insertEnd(x);
  }

  cout << "\nForward: ";
  d.displayForward();

  cout << "\nBackward: ";
  d.displayBackward();

  cout << "\n-- Program by Sarvesh Pandey --\n";
  cout << "-- BRANCH: IT EVE SEM 3 --";
  return 0;
}
