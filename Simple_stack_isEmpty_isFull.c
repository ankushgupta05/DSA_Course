/* write a program by call by value and by call by address(pointer)  */

/*   1)  Simple program of stack by call by value  */

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(int top)
{
    if (top == -1)
        return 1;
    return 0;
}
int isFull(int top, int size)
{
    if (top == size)
        return 1;
    return 0;
}

int main()
{
    struct stack s;
    s.size = 5;
    s.top = -1;
    s.arr = (int *)malloc(s.size * sizeof(int));

    // value assign
    s.arr[0] = 10;
    s.top++;
    s.arr[1] = 20;
    s.top++;
    s.arr[2] = 30;
    s.top++;
    s.arr[3] = 40;
    s.top++;
    s.arr[4] = 50;
    s.top++;
    s.arr[5] = 60;
    s.top++;

    // find Empty is Full or Not
    if (isEmpty(s.top))
    {
        printf("Stack is Empty \n");
    }
    else
    {
        printf("stack is Not Empty \n");
    }

    // find stack is Full or Not
    if (isFull(s.top, s.size))
    {
        printf("Stack is Full \n");
    }
    else
    {
        printf("Stack is Not Full \n");
    }

    return 0;
}

/* ********************************XXX*****************************************XXX****************************************XXX***************************** */

// /* 2) Simple program of stack  by call by address or pointer  */

// #include <stdio.h>
// #include <stdlib.h>

// struct stack
// {
//     int size;
//     int top;
//     int *arr;
// };

// int isEmpty(struct stack ptr)
// {
//     if (ptr.top == -1)
//         return 1;
//     return 0;
// }
// int isFull(struct stack ptr)
// {
//     if (ptr.top == ptr.size)
//         return 1;
//     return 0;
// }

// int main()
// {
//     struct stack s;
//     s.size = 5;
//     s.top = -1;
//     s.arr = (int *)malloc(s.size * sizeof(int));

//     // value assign
//     s.arr[0] = 10;
//     s.top++;
//     s.arr[1] = 20;
//     s.top++;
//     s.arr[2] = 30;
//     s.top++;
//     s.arr[3] = 40;
//     s.top++;
//     s.arr[4] = 50;
//     s.top++;
//     s.arr[5] = 60;
//     s.top++;

//     // find Empty is Full or Not
//     if (isEmpty(s))
//     {
//         printf("Stack is Empty \n");
//     }
//     else
//     {
//         printf("stack is Not Empty \n");
//     }

//     // find stack is Full or Not
//     if (isFull(s))
//     {
//         printf("Stack is Full \n");
//     }
//     else
//     {
//         printf("Stack is Not Full \n");
//     }

//     return 0;
// }
