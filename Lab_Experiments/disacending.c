
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num , marks_disascending[100];
    int temp=0,i,j;

    printf("Enter a how many subjects are there \n");
    scanf("%d", &num);

     for (int i = 1; i <=num; i++)
    {
        printf("Enter marks of %d\n",i);
        scanf("%d",&marks_disascending[i]);
    }
    printf("Marks of DIVYESHKUMAR \n");

    for (int i = 1; i <=num; i++)
    {
        printf("marks of subject %d is : %d \n",i,marks_disascending[i]);
    }

    // SORTING ARRAY IN DISASCENDING ORDER

     for (int i = 1; i <= num; i++)
    {
        for (int j = i + 1; j <= num; j++)
        {
            if (marks_disascending[i] < marks_disascending[j])
            {
                temp = marks_disascending[i];
                marks_disascending[i] = marks_disascending[j];
                marks_disascending[j] = temp;
            }
        }
    }

    printf("\n");


    printf("Marks of subject sorted in disascending order: \n");
    for (int i = 1; i <= num; i++)
    {
        printf("%d ", marks_disascending[i]);
    }
    
    return 0;
}
