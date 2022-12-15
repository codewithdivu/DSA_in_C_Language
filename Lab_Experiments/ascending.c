
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num , marks_ascending[100];
    int temp=0,i,j;

    printf("Enter a how many subjects are there \n");
    scanf("%d", &num);

     for (int i = 1; i <=num; i++)
    {
        printf("Enter marks of %d\n",i);
        scanf("%d",&marks_ascending[i]);
    }
    printf("Marks of DIVYESHKUMAR \n");

    for (int i = 1; i <=num; i++)
    {
        printf("marks of subject %d is : %d \n",i,marks_ascending[i]);
    }

    // SORTING ARRAY IN ASCENDING ORDER

     for (int i = 1; i <= num; i++)
    {
        for (int j = i + 1; j <= num; j++)
        {
            if (marks_ascending[i] > marks_ascending[j])
            {
                temp = marks_ascending[i];
                marks_ascending[i] = marks_ascending[j];
                marks_ascending[j] = temp;
            }
        }
    }

    printf("\n");


    printf("Marks of subject sorted in ascending order: \n");
    for (int i = 1; i <= num; i++)
    {
        printf("%d ", marks_ascending[i]);
    }
    
    return 0;
}
