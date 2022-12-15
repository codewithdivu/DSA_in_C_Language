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


void Insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (root->data == key)
        {
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *ne = newNode(key);

    if (key < prev->data)
    {
        prev->left = ne;
    }
    else
    {
        prev->right = ne;
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

    Insert(root, 8);
    printf("%d", root->right->right->data);
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