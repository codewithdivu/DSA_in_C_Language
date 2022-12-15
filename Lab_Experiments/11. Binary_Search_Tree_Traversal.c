#include <stdio.h>
#include <stdlib.h>

// A BINARY TREE NODE HAS DATA, POINTER TO LEFT CHILD AND A POINTER TO RIGHT CHILD

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// THIS FUNCTION WILL HELP YOU TO THAT ALLOCATES A NEW NODE WITH GIVEN DATA WITH LEFT NULL AND RIGHT NULL

struct node *newNode(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

// TRAVERSAL OF BINARY TREE IN PREORDER

void preOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        printf("Element in PreOrder is : %d\n", root->data);

        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

// TRAVERSAL OF BINARY TREE IN POSTORDER

void PostOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        PostOrderTraversal(root->left);
        PostOrderTraversal(root->right);

        printf("Element in PostOrder is : %d\n", root->data);
    }
}

// TRAVERSAL OF BINARY TREE IN INORDER

void InOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        InOrderTraversal(root->left);
        printf("Element in InOrder is : %d\n", root->data);
        InOrderTraversal(root->right);
    }
}

int main(int argc, char const *argv[])
{
    // CREATING A ROOT IN TREE
    struct node *root = newNode(5);

    root->left = newNode(3);
    root->right = newNode(6);

    root->left->left = newNode(1);
    root->left->right = newNode(4);

    // PREORDER TRAVERSAK FUNCTION CALLING
    preOrderTraversal(root);
    printf("\n");

    // POSTORDER TRAVERSAK FUNCTION CALLING
    PostOrderTraversal(root);
    printf("\n");

    // INORDER TRAVERSAK FUNCTION CALLING
    InOrderTraversal(root);
    printf("\n");

    return 0;
}

//  TREE LOOK LIKE THIS
/*
         5
        / \
       3   6
      / \
     1   4
*/