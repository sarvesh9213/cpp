// Program: Realization of Stack Concept using Array
// Ye program ek stack ko array ke through implement karta hai.
// Stack ek Linear Data Structure hai jo LIFO (Last In First Out) principle follow karta hai.

#include <stdio.h>
#include <conio.h>
#include <process.h>

#define MAX 10 // Stack ki maximum size define kar di (yaha 10 elements)

int full = MAX - 1;  // Full ka matlab: agar top MAX-1 ho jaye to stack full hoga
int roll_stack[MAX]; // Ye stack ke liye array banaya hai
int top = -1;        // Initially stack empty hai, isliye top = -1

// ------------------ PUSH OPERATION --------------------
void PUSH(int ele)
{
  if (top == full) // Agar top last position pe hai -> stack full
  {
    printf("\nOVERFLOW ! NO DATA CAN BE INSERTED ");
    getch();
    exit(0); // Program end kar do
  }
  else
  {
    top++;                 // Top ko ek step upar move karo
    roll_stack[top] = ele; // Naya element insert kar do
  }
}

// ------------------ POP OPERATION ---------------------
int POP()
{
  if (top == -1) // Agar stack khali hai
  {
    printf("\nUNDERFLOW ! EMPTY STACK, NOTHING CAN BE POPED OUT");
    getch();
    exit(0);
  }
  else
  {
    top--; // Top ko ek step niche le jao (element delete ho jayega)
  }
  return (roll_stack[top + 1]); // Jo element delete hua usko return karo
}

// ------------------ DISPLAY STACK --------------------
void DISPLAY_ARRAY_STACK()
{
  int i;
  if (top == -1) // Agar stack khali hai
  {
    printf("\nUNDERFLOW ! STACK IS EMPTY, NOTHING TO DISPLAY");
  }
  else
  {
    printf("\nDISPLAYING STACK : ");
    for (i = top; i >= 0; i--) // Top se 0 tak print karte hai (LIFO nature show hota hai)
    {
      printf("%d  ", roll_stack[i]);
    }
  }
}

// ------------------ MAIN FUNCTION --------------------
void main()
{
  char ch; // Continue karna hai ya nahi (Y/N)
  int cho, item, top;

  clrscr(); // Screen clear karne ka function (Turbo C specific)

  do
  {
    clrscr();
    printf("\nCHOICE : \n1 PUSH \n2 POP \n3 DISPLAY \n4 EXIT \nCHOICE PLEASE : ");
    scanf("%d", &cho);

    switch (cho)
    {
    case 1:
      printf("ENTER ROLL NUMBER : ");
      scanf("%d", &item);
      PUSH(item); // Element push karna
      break;

    case 2:
      item = POP(); // Element pop karna
      printf("ELEMENT POPED : %d", item);
      break;

    case 3:
      DISPLAY_ARRAY_STACK(); // Stack display karna
      break;

    case 4:
      exit(0); // Program terminate karna
      break;

    default:
      printf("\nWRONG CHOICE"); // Agar user galat input de
    }

    printf("\nDO YOU WANT TO CONTINUE ( Y / N ) : ");
    scanf(" %c", &ch); // Y/N input
  } while (ch == 'y' || ch == 'Y');

  getch();
}
