#include <stdio.h>
#include <stdlib.h>

struct DE_Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct DE_Queue *q)
{
    // if (q->r == -1)
    // {
    //     q->r = q->f = 0;
    // }
    if (q->r == q->size - 1)
        return 1;
    else
    {
        return 0;
    }
}
int isEmpty(struct DE_Queue *q)
{
    // if (q->f == q->r)
    // {
    //     q->f = q->r = -1;
    // }
    if (q->f == -1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void ShowElement(struct DE_Queue *q)
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
            printf(" index[%d] = %d ", i,q->arr[i]);
        }
        printf("\n\n");
    }
}

void EnqueueF(struct DE_Queue *q)
{
    if (q->r == q->f || ((q->f == -1) && q->r != -1))
    {
        if ((q->f == -1 && q->r == -1) || ((q->f == -1) && q->r < q->size - 1))
        {
            printf("Element Not Enqueue from FrontEnd Now Check From RearEnd.\n");
        }
        else if (q->f == -1 && q->r == q->size - 1)
        {
            printf("DE_Dequeue is OverFlow .\n");
        }
        // else if (q->r == q->f?)
        // {
        // printf("DE_Dequeue is OverFlow so that insert 1st from RearEnd.\n");
        // }

        else
        {
            printf("Element Not Enqueue From RearEnd Now Check From FrontEnd .\n");
        }
    }
    else
    {
        int x;
        scanf("%d", &x);
        q->arr[q->f] = x;
        printf("Element [ %d ] Enqueue fome FrontEnd .\n", q->arr[q->f]);
        q->f--;
    }
}

void EnqueueR(struct DE_Queue *q)
{
    if (isFull(q))
    {
        printf("DE_Queue is OverFlow. \n\n");
    }
    else
    {
        int x;
        printf("Enter Element : ");
        scanf("%d", &x);
        q->arr[q->r] = x;
        printf("Element [ %d ] added in DE_Queue Successfully.\n\n", q->arr[q->r]);
        q->r++;
    }
}

void DequeueF(struct DE_Queue *q)
{
    if (isEmpty(q))
    {
        printf("DE_Queue is UnderFlow. \n\n");
    }
    else
    {
        printf("Successfully DE_Dequeue Element is : [ %d ]\n\n", q->arr[q->f]);
        q->f++;
    }
}

void DequeueR(struct DE_Queue *q)
{
    if (q->f == -1 && q->r == -1 || q->r == q->f )
    {
        printf("DE_Dequeue is UnderFlow.\n");
       
        // if (q->r == -1 && q->f == -1)
        // {
        // printf("DE_Dequeue is UnderFlow.\n");
        // }
        // else
        // {
        //     printf("Element Not Dequeue from RearEnd .\n");
        // }
    }
    else
    {

        printf("Element [ %d ] Dequeue fome Frontend .\n", q->arr[q->r]);
        q->r--;
    }
}

int main()
{
    struct DE_Queue *q;
    int *arr = (int *)malloc(q->size * (sizeof(int)));
    int n;
    printf("Enter the size of DE_Dequeue :");
    scanf("%d", &n);
    q->size = n;
    q->f = q->r = -1;

    int Choise, x;
    while (1)
    {
        printf("Choose any one option :-\n");
        printf("1) Enqueue in Double Ended Queue.\n");
        printf("2) Dequeue in Double Ended Queue.\n");
        printf("3) Visit Data of Double Ended Queue .\n");
        printf("4) Exit.\n\n");
        scanf("%d", &Choise);
        switch (Choise)
        {
        case 1:
            while (1)
            {
                printf("Their are Two Method of Enqueue :-\n");
                printf("1) Enqueue of Frant.\n");
                printf("2) Enqueue of Rear.\n");
                printf("3) Go to Home .  \n");
                scanf("%d", &x);
                switch (x)
                {
                case 1:
                    EnqueueF(q);
                    break;
                case 2:
                    EnqueueR(q);
                    break;
                case 3:
                    goto Out1;
                    break;
                default:
                    printf("Please Enter Right Key!! \n");
                }
            }
        Out1:
            break;
        case 2:
            while (1)
            {
                /* code */

                printf("Their are Two Method of Dequeue :-\n");
                printf("1) Dequeue of Frant.\n");
                printf("2) Dequeue of Rear.\n");
                printf("3) Go to Home .  \n");
                scanf("%d", &x);
                switch (x)
                {
                case 1:
                    DequeueF(q);
                    break;
                case 2:
                    DequeueR(q);
                    break;
                case 3:
                    goto Out2;
                    break;
                default:
                    printf("Please Enter Right Key!! \n");
                }
            }
        Out2:

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