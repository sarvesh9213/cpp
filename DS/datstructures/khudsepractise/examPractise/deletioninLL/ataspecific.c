#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Node *deleteAtPosition(struct Node *head, int pos)
{
  if (head == NULL)
  {
    printf("List is empty.\n");
    return NULL;
  }

  // Agar first node delete karna hai
  if (pos == 1)
  {
    struct Node *temp = head;
    head = head->next;
    free(temp);
    return head;
  }

  struct Node *temp = head;
  struct Node *prev = NULL;
  int i = 1;

  // position tak jaane ke liye
  while (i < pos && temp != NULL)
  {
    prev = temp;
    temp = temp->next;
    i++;
  }

  if (temp == NULL)
  {
    printf("Position not found.\n");
    return head;
  }

  prev->next = temp->next; // link tod diya
  free(temp);              // node delete

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

  int pos;
  printf("Enter position to delete: ");
  scanf("%d", &pos);

  head = deleteAtPosition(head, pos);

  printf("After Deletion: ");
  printList(head);
}
