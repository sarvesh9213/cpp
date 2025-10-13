#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Node *deleteLast(struct Node *head)
{
  if (head == NULL)
  {
    printf("List is empty.\n");
    return NULL;
  }

  // Agar sirf ek hi node hai
  if (head->next == NULL)
  {
    free(head);
    return NULL;
  }

  struct Node *temp = head;
  struct Node *previous = NULL;

  // Jab tak last node nahi milta
  while (temp->next != NULL)
  {
    previous = temp;
    temp = temp->next;
  }

  previous->next = NULL; // last node ko tod diya
  free(temp);            // last node ko delete kiya

  return head;
}

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
  struct Node *head = (struct Node *)malloc(sizeof(struct Node));
  head->data = 10;
  head->next = (struct Node *)malloc(sizeof(struct Node));
  head->next->data = 20;
  head->next->next = (struct Node *)malloc(sizeof(struct Node));
  head->next->next->data = 30;
  head->next->next->next = NULL;

  printf("Original List: ");
  printList(head);

  head = deleteLast(head);

  printf("After Deleting Last Node: ");
  printList(head);
}
