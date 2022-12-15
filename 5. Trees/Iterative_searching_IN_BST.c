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

// MAKING FUNCTION WHICH FIND THE ELEMENT IN TREES AND THIS FUNCTION WILL TAKE ROOT NODE AND KEY

struct node *SearchIterative(struct node *root, int key)
{
    while (root != NULL)
    {

        if (root->data == key)
        {
            return root;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}

int main(int argc, char const *argv[])
{
    // CREATING A ROOT IN TREE
    struct node *root = newNode(5);

    root->left = newNode(3);
    root->right = newNode(6);

    root->left->left = newNode(1);
    root->left->right = newNode(4);

    //  CALLING SEARCH FUNCTION

    struct node *ptr = SearchIterative(root, 4);

    if (ptr != NULL)
    {
        printf("Element found %d\n", ptr->data);
    }
    else
    {
        printf("Not found\n");
    }

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