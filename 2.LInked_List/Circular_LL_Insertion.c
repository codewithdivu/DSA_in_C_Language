#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    struct node *temp = head;
    do
    {
        printf("Element is : %d\n", temp->data);
        temp = temp->next;

    } while (temp != head);
}

// INSERT A NODE AT FIRST IN CIRCULAR LINKED LIST

struct node *InsertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;

    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

// INSERT A  NODE AT END OF CIRCULAR LINKED LIST

struct node *insertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;

    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
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
    struct node *second;
    struct node *third;
    struct node *last;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    last = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->next = second;

    second->data = 69;
    second->next = third;

    third->data = 91;
    third->next = last;

    last->data = 117;
    last->next = head;

    // display(head);

    // head = InsertAtFirst(head,222);
    // display(head);

    // head = insertAtEnd(head, 999);
    // display(head);

    // head = InsertAtBetween(head, 684, 2);
    // display(head);

    // head = InsertAfterNode(head, second, 1000);
    // display(head);
 
    return 0;
}
