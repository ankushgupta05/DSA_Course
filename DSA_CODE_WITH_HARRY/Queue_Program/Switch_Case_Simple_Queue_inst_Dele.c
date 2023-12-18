#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

void ShowElement(struct Queue *q)
{
    if (q->f == q->r && q->f == -1)
    {
        printf("Queue is Empty.\n\n");
    }
    else
    {
        printf("The Element is : ");
        for (int i = q->f; i < q->r; i++)
        {
            printf("%d ", q->arr[i]);
        }
        printf("\n\n");
    }
}

int isFull(struct Queue *q)
{
    if (q->r == -1)
    {
        q->r = q->f = 0;
    }
    if (q->r == q->size)
        return 1;
    else
    {
        return 0;
    }
}
int isEmpty(struct Queue *q)
{
    if (q->f == q->r)
    {
        q->f = q->r = -1;
    }
    if (q->f == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct Queue *q)
{
    if (isFull(q))
    {
        printf("Queue is OverFlow. \n\n");
    }
    else
    {
        int x;
        printf("Enter Element : ");
        scanf("%d", &x);
        q->arr[q->r] = x;
        printf("Element [ %d ] added in Queue Successfully.\n\n", q->arr[q->r]);
        q->r++;
    }
}

void dequeue(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is UnderFlow. \n\n");
    }
    else
    {
        printf("Successfully Dequeue Element is : [ %d ]\n\n", q->arr[q->f]);
        q->f++;
    }
}

int main()
{
    struct Queue *q;
    int *arr = (int *)malloc(q->size * (sizeof(int)));
    int n;
    printf("Enter the size of Queue :");
    scanf("%d", &n);
    q->size = n;
    q->f = q->r = -1;

    int Choise;
    while (1)
    {
        printf("Choose any one option :-\n");
        printf("1) Enqueue in Queue.\n");
        printf("2) Dequeue in Queue.\n");
        printf("3) Visit Data of Queue .\n");
        printf("4) Exit.\n\n");
        scanf("%d", &Choise);
        switch (Choise)
        {
        case 1:
            enqueue(q);
            break;
        case 2:
            dequeue(q);
            break;
        case 3:
            ShowElement(q);
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("Please Enter Right key!!\n\n");
            break;
        }
    }

    return 0;
}