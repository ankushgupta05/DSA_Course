#include <stdio.h>
#include <stdlib.h>

struct node *f = NULL; // Global declaration
struct node *r = NULL; // Global declaration

struct node
{
    int data;
    struct node *next;
};

struct node TraversLinkedList(struct node *head)
{
    struct node *ptr = head;

    if (ptr == NULL)
    {
        printf("The Queue is Empty \n\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("Element is = %d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

void enqueue(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("The Queue is OverFlow .\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        printf("The enqueue Element is %d\n", n->data);
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{

    if (f == NULL)
    {
        printf("The Queue is Empty \n");
    }
    else
    {
        int val = -1;
        struct node *Temp;
        Temp = f;
        val = Temp->data;
        f = Temp->next;
        free(Temp);
        return val;
    }
}

int main()
{
    printf("Before Enqueue and dequeue The Queue is :- \n");
    TraversLinkedList(f);

    //  Function of Enqueue Element
    enqueue(20);
    enqueue(10);
    enqueue(30);
    enqueue(40);

    // Function of Dequeue Element

    printf("\nThe dequeue Element is %d\n", dequeue());
    printf("The dequeue Element is %d\n", dequeue());
    printf("The dequeue Element is %d\n", dequeue());

    printf("\nAfter Enqueue or dequeue the Element are present in Queue :- \n");
    TraversLinkedList(f);

    return 0;
}
