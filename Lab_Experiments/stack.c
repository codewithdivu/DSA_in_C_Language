#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000

int stack[MAX_SIZE], choice, n, top, x, i;
void push();
void pop();
void display();
void peek();
void peep();

int main()
{

    top = -1;
    printf("\n Enter the size of stack :");
    scanf("%d", &n);
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.PEEK\n\t 4.EXIT\n\t");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            peek();
            break;
        }
        case 5:
        {
            printf("\n\t EXIT POINT ");
            break;
        }
        default:
        {
            printf("\n\t Please Enter a Valid Choice(1/2/3/4)");
        }
        }
    } while (choice != 4);
    return 0;
}
void push()
{
    if (top >= n - 1)
    {
        printf("\n\tSTACK is over flow");
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top <= -1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d", stack[top]);
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        printf("\n The elements in STACK \n");
        for (i = top; i >= 0; i--)
            printf("\n%d", stack[i]);
        // printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}
void peek()
{
    if (top == -1)
    {
        printf("staack is empty\n");
    }
    else
    {
        printf("Top of stack is %d\n", stack[top]);
    }
}
void peep()
{
    int s;
    printf("\nEnter Position for search:->");
    scanf("%d", &s);
    if (top - s <= -1)
    {
        printf("\nThe Stack is Overflow...");
    }
    else
    {
        printf("\nThe Element is : %d", stack[top - s]);
    }
}
