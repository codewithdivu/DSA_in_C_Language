#include<stdio.h>

int linear_searching(int arr[], int size, int element)
{
    for (int  i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
    }
        return -1;
    
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,24,45,65,74,345,6,54,33,2,99};
    int size = sizeof(arr)/sizeof(int);
    int element=6;
    int Search_index = linear_searching(arr, size, element);
    printf("the element %d is found in index %d \n",element,Search_index);
    return 0;
}
