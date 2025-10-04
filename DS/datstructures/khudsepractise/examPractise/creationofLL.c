#include <stdio.h>
#include <stdlib.h>

// Structure definition for Node
// A Node has 2 parts:
// [ data / next ]
struct Node
{
  int data;          // data part -> stores the value
  struct Node *next; // next part -> stores address of next node
};

int main()
{
  struct Node *head = NULL;    // head points to first node (initially empty list)
  struct Node *temp = NULL;    // used for traversing
  struct Node *newNode = NULL; // for creating new nodes
  int choice = 1;              // 1 = continue adding nodes, 0 = stop
  int count = 0;               // to count number of elements

  // Creation of Linked List
  while (choice)
  {
    // Step 1: Allocate memory for a new node
    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
      printf("Memory not allocated!\n");
      return 1; // exit if malloc fails
    }

    // Step 2: Take input for data part
    printf("Enter data: ");
    scanf("%d", &newNode->data); // taking the data from the user and putting it in the left part

    newNode->next = NULL;
    // At creation, node looks like this:
    // [ data / NULL ]

    // Step 3: Attach node to the linked list
    if (head == NULL)
    {
      // If this is the first node
      head = newNode;
      temp = newNode;
    }
    else
    {
      // Connect last node's next to new node
      temp->next = newNode;
      temp = newNode;
    }

    count++; // Increase count

    // Step 4: Ask user whether to continue
    printf("Do you want to continue? (1 = Yes, 0 = No): ");
    scanf("%d", &choice);
  }

  // Traversal of Linked List
  printf("\nLinked List elements: ");
  temp = head; // Start from head

  while (temp != NULL)
  {
    // Print current node's data
    printf("%d ", temp->data);
    // Move to next node
    temp = temp->next;
  }

  // Print number of elements
  printf("\nNumber of elements in the linked list = %d\n", count);

  return 0;
}
