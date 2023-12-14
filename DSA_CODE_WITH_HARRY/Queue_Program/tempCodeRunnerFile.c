
/* simple Queue program   of an enqueue and  an dequeue without Using pointer  */


// NOTE : This program is not Give Output so that We need to Kown How to overcome This Problem From Faculty Member 



#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int r;
    int f;
    int *arr;
};

int isFull(struct Queue* q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct Queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct Queue *q, int val)
{
    if (isFull(q))
    {
        printf("The Queue is OverFlow at index [%d] = %d \n\n", q->r, q->arr[q->r+1]);
    }
    else
    {
        q->r = q->r + 1;
        q->arr[q->r] = val;
        printf("Queue Element at index [%d] = %d \n",q->r, q->arr[q->r]);
    }
}

int dequeue(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("The Queue is UnderFlow \n\n");
    }
    else
    {
        q->f = q->f + 1;
        return q->arr[q->f];
    }
  } 
int main()
{
    struct Queue q;  // without using pointer
    q.size = 5;
    q.r = q.f = -1;
    int *arr = (int *)malloc(q.size* sizeof(int));
   
// Function of enqueue Element
    printf("The enqueue  element \n\n");
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 10);
    // enqueue(&q, 20);


//  Fuction of dequeue Element 
    printf("The dequeue  element \n\n");
    
    printf("The Queue dequeue value is = %d\n",dequeue(&q));
    printf("The Queue dequeue value is = %d\n",dequeue(&q));

     return 0;
 }
