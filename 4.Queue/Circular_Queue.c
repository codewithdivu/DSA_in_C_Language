#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

void Enqueue(struct queue *q, int val)
{
    if ((q->front == 1 && q->rear == q->size) || (q->rear = q->front - 1))
    {
        printf("circular queue is full\n");
    }
    if(q->front==0){
        q->front=q->rear = 1;
        q->arr[q->rear]=val;
    }
    else if(q->rear == q->size){
        q->rear =
    }
}

int main(int argc, char const *argv[])
{
    struct queue q;
    q.size = 10;
    q.front = 0;
    q.rear = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    return 0;
}