#include <stdio.h>

// Bubble Sort Function
void BUBBLE(int *DATA, int N)
{ // N is the number of elements
  // **DATA is the pointer to the array
  int K, Pointer, TEMP;
  // k is for outer loop
  // Pointer is for inner loop

  // Outer loop chal raha hai N-1 times
  for (K = 1; K <= N - 1; K++)
  {
    Pointer = 1;

    // Inner loop: adjacent elements compare karne ke liye
    while (Pointer <= N - K)
    {
      if (DATA[Pointer] > DATA[Pointer + 1])
      {
        // Agar left bada hai right se, to swap
        TEMP = DATA[Pointer];
        DATA[Pointer] = DATA[Pointer + 1];
        DATA[Pointer + 1] = TEMP;
      }
      Pointer = Pointer + 1; // pointer agle element par
    }
  }
}

int main()
{
  // Array define kiya (0th index ko dummy rakha)
  int LA[] = {0, 11, 33, 22, 44, 55, 88, 66, 77, 100, 99};
  int K, LB, UB;

  LB = 1;  // starting index
  UB = 10; // ending index

  // Bubble Sort call kiya
  BUBBLE(LA, UB);

  // Sorted array print karna
  K = LB;
  while (K <= UB)
  {
    printf("%d\n", LA[K]); // yahan pe straight quotes use karo
    K = K + 1;
  }

  return 0; // main ka return
}
