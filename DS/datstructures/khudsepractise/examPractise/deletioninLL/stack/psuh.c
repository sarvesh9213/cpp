#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int value)
{
  if (top == MAX - 1)
  {
    printf("Stack Overflow! Cannot push %d\n", value);
  }
  else
  {
    top++;
    stack[top] = value;
    printf("%d pushed into the stack.\n", value);
  }
}

int main()
{
  push(10);
  push(20);
  push(30);
  push(40);
  push(50);
  push(60); // will show overflow

  printf("\nCurrent stack elements:\n");
  for (int i = top; i >= 0; i--)
  {
    printf("%d ", stack[i]);
  }

  return 0;
}
