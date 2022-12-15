#include<stdio.h>
#include<stdlib.h>

int display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
        printf("\n");
}

int Deletion_array(int arr[],int size,int index)
{
    for (int i = index; i < size; i++)
    {
        arr[i]=arr[i+1];
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[]={7,99,45,23,66,78};
    int size=6,index=3;
    display(arr, size);
    Deletion_array(arr,size,index);
    size-=1;    
    display(arr, size);
    return 0;
}
