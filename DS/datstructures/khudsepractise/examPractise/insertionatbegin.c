#include <stdio.h>
#include <stdlib.h>

// Structure definition for Node
struct Node
{
  int data;          // data part -> stores value
  struct Node *next; // next part -> stores address of next node
};

// Function to insert a new node at the beginning
void insertAtBeginning(struct Node **head, int value)
{
  // Step 1: Allocate memory
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

  if (newNode == NULL)
  {
    printf("Memory not allocated!\n");
    return;
  }

  // Step 2: Put data inside node
  newNode->data = value;

  // Step 3: Point new node's next to current head
  newNode->next = *head;

  // Step 4: Update head to new node
  *head = newNode;

  printf("\nInserted %d at the beginning.\n", value);
}

// Function to traverse and print linked list
void traverse(struct Node *head)
{
  struct Node *temp = head;
  printf("\nLinked List elements: ");
  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main()
{
  struct Node *head = NULL; // initially list is empty
  struct Node *temp = NULL; // for creating initial list
  struct Node *newNode = NULL;
  int choice = 1, count = 0;

  // Create linked list normally
  while (choice)
  {
    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    if (head == NULL)
    {
      head = newNode;
      temp = newNode;
    }
    else
    {
      temp->next = newNode;
      temp = newNode;
    }

    count++;

    printf("Do you want to continue? (1 = Yes, 0 = No): ");
    scanf("%d", &choice);
  }

  traverse(head);
  printf("Number of elements = %d\n", count);

  // Now perform insertion at beginning
  int newValue;
  printf("\nEnter value to insert at beginning: ");
  scanf("%d", &newValue);

  insertAtBeginning(&head, newValue);
  count++; // increase count

  // Print after insertion
  traverse(head);
  printf("Number of elements = %d\n", count);

  return 0;
}
