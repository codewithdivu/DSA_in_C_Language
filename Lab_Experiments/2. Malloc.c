// MALLOC

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr;
    int n=5, i;


    ptr = (int *)malloc(5 * sizeof(int));

    printf("Memory successfully allocated using malloc.\n");

    for (i = 0; i < 5; ++i)
    {
        ptr[i] = i + 1;
    }
    printf("The elements of the array are: ");
    for (i = 0; i < 5; ++i)
    {
        printf("%d, ", ptr[i]);
    }
    return 0;
}
