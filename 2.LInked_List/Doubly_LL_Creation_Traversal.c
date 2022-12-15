#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

// TRAVERSAL OF DOUBLY LINKED LIST

void display(struct node *head)
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("Element is %d\n", p->data);
        p = p->next;
    }
}

int main(int argc, char const *argv[])
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *last = (struct node *)malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 12;
    head->next = second;

    second->prev = head;
    second->data = 24;
    second->next = third;

    third->prev = second;
    third->data = 36;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 48;
    fourth->next = last;

    last->prev = fourth;
    last->data = 60;
    last->next = NULL;

    display(head);

    return 0;
}