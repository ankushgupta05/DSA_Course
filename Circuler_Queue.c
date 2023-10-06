#include <stdio.h>
#include <stdlib.h>

struct Circuler_Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct Circuler_Queue *q)
{
    if ((q->r + 1) % q->size == q->f)
        return 1;
    return 0;
}

int isEmpty(struct Circuler_Queue *q)
{
    if (q->r == q->f)
        return 1;
    return 0;
}

void Circuler_enqueue(struct Circuler_Queue *q, int val)
{
    if (isFull(q))
    {
        printf("The Queue is OverFlow at the value = %d.\n", val);
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("The circuler enqueue at index[%d] = %d \n", q->r, q->arr[q->r]);
    }
}

int Circuler_dequeue(struct Circuler_Queue *q)
{
    int val = -1;
    if (isEmpty(q))
    {
        printf("The Queue is UnderFlow So that ");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        val = q->arr[q->f];
    }
    return val;
}

int main()
{
    struct Circuler_Queue *q;
    q->size = 5;
    q->f = 0;
    q->r = 0;
    int *arr = (int *)malloc(q->size * (sizeof(int)));

    // Function of enqueue Element
    printf("The enqueue  element \n\n");
    Circuler_enqueue(q, 10);
    Circuler_enqueue(q, 20);
    Circuler_enqueue(q, 30);
    Circuler_enqueue(q, 40);
    Circuler_enqueue(q, 44);
    Circuler_enqueue(q, 88);

    //  Fuction of dequeue Element
    printf("\nThe dequeue  element  . \n\n");

    printf("The Queue dequeue value is = %d\n", Circuler_dequeue(q));
    printf("The Queue dequeue value is = %d\n", Circuler_dequeue(q));
    printf("The Queue dequeue value is = %d\n", Circuler_dequeue(q));
    printf("The Queue dequeue value is = %d\n", Circuler_dequeue(q));
    printf("The Queue dequeue value is = %d\n", Circuler_dequeue(q));
    printf("The Queue dequeue value is = %d\n", Circuler_dequeue(q));
    printf("The Queue dequeue value is = %d\n", Circuler_dequeue(q));
    printf("The Queue dequeue value is = %d\n", Circuler_dequeue(q));

    printf("\n");
    printf("After dequeue Element Those space is valaible there can be set another Element .\n");

    Circuler_enqueue(q, 50);
    Circuler_enqueue(q, 60);
    Circuler_enqueue(q, 70);
    Circuler_enqueue(q, 80);

    // printf("\nALL element which rimender element in Queue \n\n");

    return 0;
}