// Realloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, *ptr, sum = 0;
    ptr = malloc(100);
    if (ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    ptr = realloc(ptr, 500);
    if (ptr != NULL)
        printf("Memory created successfully\n");

    return 0;
}
