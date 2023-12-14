 #include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    return 0;
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size)
        return 1;
    return 0;
}

void PushValue(struct stack *ptr, int n)
{
    if (isFull(ptr))
    {
        printf("THe stack is Overflow on the index [%d] and on the Element = %d.\n", ptr->top + 1, n);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = n;
        printf("the Push value on the index [%d] is = %d", ptr->top, ptr->arr[ptr->top]);
        printf("\n");
    }
}

void PopValue(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("THe stack is Underflow on the index of [%d].\n", ptr->top);
    }
    else
    {
        int val = ptr->arr[ptr->top];
        printf("The pop value in stack on the index [%d] is = %d\n", ptr->top, val);
        ptr->top--;
    }
}

int PeekValue(struct stack *ptr, int PeekNumbr)
{
    int Value = ptr->top - PeekNumbr + 1;
    if (Value < 0)
    {
        printf("Your Peek Numbr [%d] Does Not Exit Here .\n", PeekNumbr);
        return -1;
        // Important NOTE :  
        // exit(0); // After exit(0) the program will be stop.
    }
    else
    {
        return ptr->arr[Value];
    }
}
int main()
{
    // struct stack *s=(struct stack *)malloc(sizeof(struct stack));    // This line is also right
    struct stack *s;
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // push value in stack
    PushValue(s, 11);
    PushValue(s, 22);
    PushValue(s, 33);
    PushValue(s, 44);
    PushValue(s, 55);
    PushValue(s, 66);
    PushValue(s, 77);

    // Pop value in stack
    printf("After pop in stack .\n\n");
    PopValue(s);
    PopValue(s);

// Data access by Peek number
    printf("\nThe Peek element on the position numbr is = %d\n",PeekValue(s,1));
    printf("The Peek element on the position numbr is = %d\n",PeekValue(s,2));
    printf("The Peek element on the position numbr is = %d\n",PeekValue(s,3));
    
    //   Peek value is not accesing  from the for loop so that we have to need asking from faculty member about it ?

    // for(int j=1; j<s->top; j++){
    // printf("The Peek element on the position numbr [%d] is = %d",j,PeekValue(s,j));
    // }

    
    
    return 0;
}
