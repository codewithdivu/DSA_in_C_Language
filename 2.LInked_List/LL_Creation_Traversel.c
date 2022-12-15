#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next   ;
};

void LinkedListTreaversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is : %d \n", ptr->data);
        ptr = ptr->next;
    }
}

int main(int argc, char const *argv[])
{
    struct node *head;
    struct node *second;
    struct node *third;

    // Allocated memory for node in the linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 34;
    head->next = second;

    second->data = 69;
    second->next = third;

    third->data = 91;
    third->next = NULL;

    LinkedListTreaversal(head);
    return 0;
}