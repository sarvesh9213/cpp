#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
  int data;
  struct Node *next;
};

int main()
{
  struct Node *head = NULL, *temp = NULL, *newNode = NULL;
  int choice = 1, count = 0;

  // Create initial linked list
  while (choice)
  {
    // Make a new node
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if (head == NULL)
    {
      // First node
      head = newNode;
      temp = newNode;
    }
    else
    {
      // Add at end
      temp->next = newNode;
      temp = newNode;
    }

    count++;
    printf("Do you want to continue? (1 = Yes, 0 = No): ");
    scanf("%d", &choice);
  }

  // Print list before insertion
  printf("\nLinked List: ");
  temp = head;
  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\nNumber of nodes = %d\n", count);

  // Now insert at end
  newNode = (struct Node *)malloc(sizeof(struct Node));
  printf("\nEnter data to insert at the end: ");
  scanf("%d", &newNode->data);
  newNode->next = NULL;

  // Traverse to last node
  temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode; // attach at end
  count++;

  // Print list after insertion
  printf("\nLinked List after insertion: ");
  temp = head;
  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\nNumber of nodes = %d\n", count);

  return 0;
}
