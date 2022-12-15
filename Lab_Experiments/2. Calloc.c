// Calloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, *ptr, sum = 0;
    ptr = calloc(10, sizeof(int));
    
    printf("calculating the sequence sum of the first 10 terms \ n ");
    for (i = 0; i < 10; ++i)
    {
        *(ptr + i) = i;
        sum += *(ptr + i);
    }
    printf("Sum = %d", sum);
    free(ptr);
    return 0;
}