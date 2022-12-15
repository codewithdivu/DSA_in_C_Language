// INSERTION IN SINGLY LINKED LIST

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// TRAVERSAL OF LINKED LIST

void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// INSERT A NODE AT FIRST

struct node *InsertAtFirst(struct node *head, int data)
{
    struct node *newptr = (struct node *)malloc(sizeof(struct node));

    newptr->data = data;
    newptr->next = head;
    return newptr;
}

// INSERT A NODE AT END

struct node *InsertAtEnd(struct node *head, int data)
{
    struct node *newptr = (struct node *)malloc(sizeof(struct node));
    newptr->data = data;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = newptr;
    newptr->next = NULL;
    return head;
}

// INSERT A NODE AT BETWEEN OR INDEX

struct node *InsertAtBetween(struct node *head, int data, int index)
{
    struct node *newptr = (struct node *)malloc(sizeof(struct node));
    newptr->data = data;
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    newptr->next = p->next;
    p->next = newptr;

    return head;
}

// INSERT A NODE AT AFTER NODE

struct node *InsertAfterNode(struct node *head, struct node *prevNode, int data)
{
    struct node *newptr = (struct node *)malloc(sizeof(struct node));
    newptr->data = data;

    newptr->next = prevNode->next;
    prevNode->next = newptr;

    return head;
}

int main(int argc, char const *argv[])
{
    struct node *head;
    struct node *Middle;
    struct node *last;

    head = (struct node *)malloc(sizeof(struct node));
    Middle = (struct node *)malloc(sizeof(struct node));
    last = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->next = Middle;

    Middle->data = 65;
    Middle->next = last;

    last->data = 91;
    last->next = NULL;

    // display(head);

    // head = InsertAtFirst(head,222);
    // display(head);

    // head = InsertAtEnd(head, 999);
    // display(head);

    // head = InsertAtBetween(head, 684, 2);
    // display(head);

    // head = InsertAfterNode(head, Middle, 1000);
    // display(head);

    return 0;
}