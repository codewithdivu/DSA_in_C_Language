#include <stdio.h>
#include <stdlib.h>

int binarySearching(int arr[], int size, int key)
{
    int start = 0;
    int end = size;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (key == mid)
        {
            return mid;
        }
        else if (key < mid)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(int);
    int key;
    scanf("%d", &key);
    int a = binarySearching(arr, size, key);
    printf("The element is found in a index is %d ", a);
    return 0;
}