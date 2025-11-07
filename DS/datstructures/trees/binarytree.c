#include <stdio.h>
#include <stdlib.h>

// Structure banate hain ek binary tree ke node ke liye
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Naya node banane ke liye function
struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node)); // memory allocate karte hain
    newNode->data = value;                                             // data set karte hain
    newNode->left = NULL;                                              // initially left NULL
    newNode->right = NULL;                                             // initially right NULL
    return newNode;
}

// ✅ Inorder Traversal: Left -> Root -> Right
void inorderTraversal(struct Node *root)
{
    if (root == NULL)
        return; // base case: agar root NULL hai to kuch mat karo

    inorderTraversal(root->left);  // pehle left subtree
    printf("%d ", root->data);     // fir root node
    inorderTraversal(root->right); // last mein right subtree
}

// ✅ Preorder Traversal: Root -> Left -> Right
void preorderTraversal(struct Node *root)
{
    if (root == NULL)
        return;

    printf("%d ", root->data);      // pehle root node print karo
    preorderTraversal(root->left);  // fir left subtree
    preorderTraversal(root->right); // fir right subtree
}

// ✅ Postorder Traversal: Left -> Right -> Root
void postorderTraversal(struct Node *root)
{
    if (root == NULL)
        return;

    postorderTraversal(root->left);  // pehle left subtree
    postorderTraversal(root->right); // fir right subtree
    printf("%d ", root->data);       // last mein root node
}

// 🌱 Main function
int main()
{
    // Tree banate hain manually:
    //          1
    //         / \
    //        2   3
    //       / \
    //      4   5

    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Inorder Traversal (Left, Root, Right): ");
    inorderTraversal(root);

    printf("\nPreorder Traversal (Root, Left, Right): ");
    preorderTraversal(root);

    printf("\nPostorder Traversal (Left, Right, Root): ");
    postorderTraversal(root);

    return 0;
}
