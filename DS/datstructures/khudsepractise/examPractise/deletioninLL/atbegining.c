#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

// Function to delete the first node
struct Node *deleteFirst(struct Node *head)
{
  if (head == NULL)
  {
    printf("List is empty, nothing to delete.\n");
    return NULL;
  }

  struct Node *temp = head; // temp points to the first node
  head = head->next;        // move head to the second node
  free(temp);               // free memory of the old first node

  printf("First node deleted successfully.\n");
  return head; // return new head
}

// Function to print the linked list
void printList(struct Node *head)
{
  struct Node *temp = head;
  while (temp != NULL)
  {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

int main()
{
  // Creating a simple linked list manually: 10 -> 20 -> 30 -> NULL
  struct Node *head = (struct Node *)malloc(sizeof(struct Node));
  head->data = 10;
  head->next = (struct Node *)malloc(sizeof(struct Node));
  head->next->data = 20;
  head->next->next = (struct Node *)malloc(sizeof(struct Node));
  head->next->next->data = 30;
  head->next->next->next = NULL;

  printf("Original List: ");
  printList(head);

  head = deleteFirst(head);

  printf("After deleting first node: ");
  printList(head);

  return 0;
}
