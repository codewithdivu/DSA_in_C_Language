#include <stdio.h>
#include <stdlib.h>
#define v 5

struct node
{
    int data;
    struct node *next;
};

struct node *adjlist[v];

void init()
{
    int i;
    for (int i = 0; i < v; i++)
    {
        adjlist[i] = NULL;
    }
}

void addEdge(int src, int dest)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = dest;
    newNode->next = NULL;

    if (adjlist[src] == NULL)
    {
        adjlist[src] = newNode;
    }
    else
    {
        struct node *last = adjlist[src];

        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = newNode;
    }
}

int main(int argc, char const *argv[])
{
    init();

    addEdge(0,1);
    addEdge(0,2);
    addEdge(0,3);
    addEdge(1,3);
    addEdge(1,4);
    addEdge(2,3);
    addEdge(3,4);
    return 0;
}