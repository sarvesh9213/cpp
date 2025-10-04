#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct Node
{
  int data;
  struct Node *next;
};

// Function to insert node at the end
void insertAtEnd(struct Node **head, int value)
{
  // Step 1: Allocate memory
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  if (newNode == NULL)
  {
    printf("Memory not allocated!\n");
    return;
  }

  newNode->data = value;
  newNode->next = NULL;

  // Step 2: If list is empty
  if (*head == NULL)
  {
    *head = newNode;
    return;
  }

  // Step 3: Traverse to the last node
  struct Node *temp = *head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  // Step 4: Attach new node at the end
  temp->next = newNode;
}

// Function to traverse and print
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
  struct Node *head = NULL;
  int choice = 1, val;

  // Create initial linked list
  while (choice)
  {
    printf("Enter data: ");
    scanf("%d", &val);
    insertAtEnd(&head, val);

    printf("Do you want to continue? (1 = Yes, 0 = No): ");
    scanf("%d", &choice);
  }

  traverse(head);

  // Insert at end after creation
  printf("\nEnter value to insert at the end: ");
  scanf("%d", &val);
  insertAtEnd(&head, val);

  traverse(head);

  return 0;
}
