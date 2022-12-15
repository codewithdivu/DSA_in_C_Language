#include <stdio.h>
#include <stdlib.h>

// TRAVERSER

int display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
        // printf("\t");
    }
        printf("\n");
}

// INSERTION OF ARRAY
int insertion(int arr[], int size, int element, int index, int capacity)
{
    if (size >= capacity)
    {
        printf("arrays' size is full\n");
    }
    else
    {
        for (int i=size-1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
    }
}


int main(int argc, char const *argv[])
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 64, index = 1;
    display(arr, size);
    insertion(arr, size, element, index, 100);
    size += 1;
    display(arr, size);
    return 0;
}
