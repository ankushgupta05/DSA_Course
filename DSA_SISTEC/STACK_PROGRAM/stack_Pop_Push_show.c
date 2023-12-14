#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
void push();
void pop();
void show();
int arr[SIZE];
int top = -1;

int main()
{
    int choise;
    while (1)
    {
        printf("Enter one option :-\npuch\npop\nshow\nExit\n\n");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            break;
            printf("Sorry wrong choise");
        }
    }
}

void push()
{

    if (top == SIZE - 1)
    {
        printf("stack overflow\n\n");
    }
    else
    {
        top++;
        int x;
        printf("Enter a inserted value :");
        scanf("%d", &x);
        arr[top] = x;
        printf("successfully inserted element \n");
    }
}
void pop()
{
    if (top == -1)
    {
        printf("stack is underflow");
    }
    else
    {
        printf("the pop value is :%d", arr[top]);
        printf("\n\n");
        top--;
    }
}
void show()
{
    if (top == -1)
    {
        printf("stack under \n");
    }
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("value is :%d\n", arr[i]);
    }
    printf("\n");
}
