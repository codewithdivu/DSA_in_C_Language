#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};



int main(int argc, char const *argv[])
{
    struct stack *s;
    s->size = 30;
    s->top = -1;
    s->arr = (int *)malloc(s->size * (sizeof(int)));

    return 0;
}
