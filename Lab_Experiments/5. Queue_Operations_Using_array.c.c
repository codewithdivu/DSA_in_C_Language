#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int IsFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int IsEmpty(struct queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (IsFull(q))
    {
        printf("Queue is full \n");
    }
    else
    {
        q->r++;
        q->arr[q->r] == val;
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (IsEmpty(q))
    {
        printf("Queue is Empty \n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main(int argc, char const *argv[])
{
    struct queue q;
    q.size = 4;
    q.f = 0;
    q.r = 0;
    q.arr = (int *)malloc(q.size * (sizeof(int)));

    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1);
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    
    return 0;
}