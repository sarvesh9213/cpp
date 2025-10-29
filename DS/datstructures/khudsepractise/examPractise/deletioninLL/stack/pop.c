#include <stdio.h>
#define MAX 5

int stack[MAX] = {10, 20, 30, 40, 50};
int top = 4; // since 5 elements are already in stack

void pop()
{
  if (top == -1)
  {
    printf("Stack Underflow! No element to pop.\n");
  }
  else
  {
    printf("%d popped from the stack.\n", stack[top]);
    top--;
  }
}

int main()
{
  pop();
  pop();
  pop();
  pop();
  pop();
  pop(); // will show underflow

  printf("\nRemaining elements in stack:\n");
  for (int i = top; i >= 0; i--)
  {
    printf("%d ", stack[i]);
  }

  return 0;
}
