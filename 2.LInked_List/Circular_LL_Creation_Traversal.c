#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void Display(struct node *head)
{
    struct node *temp = head;
    do
    {
        printf("Element is : %d\n", temp->data);
        temp = temp->next;

    } while (temp != head);
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

    Display(head);
    return 0;
}
