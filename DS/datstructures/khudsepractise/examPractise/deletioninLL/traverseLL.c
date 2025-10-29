#include <stdio.h>
#include <stdlib.h>

// Define the structure of a Node
struct node
{
    int data;          // stores the value
    struct node *next; // pointer to the next node
};

// Function to traverse the linked list
void traverse(struct node *head)
{
    // If head is NULL, list is empty
    if (head == NULL)
    {
        printf("Linked list empty\n");
        return;
    }

    // Temporary pointer to move through the list
    struct node *ptr = head;

    // Keep moving until we reach NULL
    while (ptr != NULL)
    {
        printf("%d ", ptr->data); // print data of current node
        ptr = ptr->next;          // move to the next node
    }
    printf("\n");
}

int main()
{
    // Step 1: Create nodes using malloc
    struct node *node1 = (struct node *)malloc(sizeof(struct node));
    struct node *node2 = (struct node *)malloc(sizeof(struct node));
    struct node *node3 = (struct node *)malloc(sizeof(struct node));

    // Step 2: Assign data to nodes
    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    // Step 3: Link the nodes together
    node1->next = node2; // node1 → node2
    node2->next = node3; // node2 → node3
    node3->next = NULL;  // node3 → NULL (end of list)

    // Step 4: Head points to the first node
    struct node *head = node1;

    // Step 5: Traverse and print the list
    printf("Linked List elements are: ");
    traverse(head);

    return 0;
}
