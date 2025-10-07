#include <stdio.h>
#include <stdlib.h>

// Structure of a Node
struct node
{
  int data;          // data part
  struct node *next; // pointer to next node
};

int main()
{
  struct node *head = NULL, *newnode, *temp;
  int choice, count = 0, pos, i = 1;

  // Creating initial linked list
  head = (struct node *)malloc(sizeof(struct node));
  printf("Enter data for 1st node: ");
  scanf("%d", &head->data);
  head->next = NULL;
  temp = head;

  // User se puchhna hai ki aur node banana hai ya nahi
  printf("Do you want to add more nodes? (1 for yes / 0 for no): ");
  scanf("%d", &choice);

  while (choice)
  {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    temp->next = newnode;
    temp = newnode;

    printf("Do you want to continue (1/0): ");
    scanf("%d", &choice);
  }

  // Count total number of nodes
  temp = head;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }

  // Insert at specific position
  newnode = (struct node *)malloc(sizeof(struct node));
  printf("Enter the position where you want to insert: ");
  scanf("%d", &pos);

  if (pos > count)
  {
    printf("Invalid position!\n");
  }
  else
  {
    printf("Enter data for new node: ");
    scanf("%d", &newnode->data);

    // Agar starting me insert karna ho
    if (pos == 1)
    {
      newnode->next = head;
      head = newnode;
    }
    else
    {
      temp = head;
      i = 1;

      // temp ko us position ke just pehle le jao
      while (i < pos - 1)
      {
        temp = temp->next;
        i++;
      }

      // linking ka kaam
      newnode->next = temp->next;
      temp->next = newnode;
    }
  }

  // Display linked list
  temp = head;
  printf("\nLinked List after insertion:\n");
  while (temp != NULL)
  {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");

  return 0;
}
