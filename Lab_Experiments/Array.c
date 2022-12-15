// ARRAY
// SORTING ARRAY

#include <stdio.h>
#define MAX_SIZE 100

int main()
{

    int arr[MAX_SIZE], num;
    int temp = 0;

    printf("Enter a how many eliments you need \n");
    scanf("%d", &num);

    for (int i = 0; i <num; i++)
    {
        printf("Enter %d element\n",i);
        scanf("%d",&arr[i]);
    }
    

    printf("Elements of original array: \n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

    // SORTING A ARRAY

    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n");

    printf("Elements of array sorted in ascending order: \n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}