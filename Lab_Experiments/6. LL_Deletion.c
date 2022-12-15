#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// TRAVERSAL OF LINKED LIST

void LinkedListTreaversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is : %d \n", ptr->data);
        ptr = ptr->next;
    }
}

// DELETION A FIRST NODE OF LINKED LIST

struct node *DeletionAtfirst(struct node *head)
{
    struct node *ptr = head;

    head = head->next;
    free(ptr);
    return head;
}

// DELETION A NODE AT GIVEN INDEX IN LINKED LIST

struct node *DeletionAtbetween(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

// DELETION A LAST NODE OF LINKED LIST

struct node *DeletionAtend(struct node *head)
{
    struct node *p = head;
    struct node *q = p->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

// DELETION A NODE AT GIVEN VALUE

struct node *DeletionAtvalue(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = p->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        free(q);
        return head;
    }
    else
    {
        printf("value is not found in linked list\n");
    }
}

int main(int argc, char const *argv[])
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *last;

    // Allocated memory for node in the linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    last = (struct node *)malloc(sizeof(struct node));

    head->data = 35;
    head->next = second;

    second->data = 70;
    second->next = third;

    third->data = 105;
    third->next = last;

    last->data = 140;
    last->next = NULL;

    printf("Linked list before the deletion\n");
    LinkedListTreaversal(head);

    // printf("Linked list after the deletion\n");
    // head = DeletionAtfirst(head);
    // LinkedListTreaversal(head);

    // printf("Linked list after the deletion\n");
    // head = DeletionAtbetween(head, 2);
    // LinkedListTreaversal(head);

    // printf("Linked list after the deletion\n");
    // head = DeletionAtend(head);
    // LinkedListTreaversal(head);

    // printf("Linked list after the deletion\n");
    // head = DeletionAtvalue(head, 2);
    // LinkedListTreaversal(head);

    return 0;
}