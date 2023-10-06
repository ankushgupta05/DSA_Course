#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    int next;
};

struct node *TraverseLinkedList(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *CreateLinkedList(struct node *head, int size)
{
    struct node *Temp;
    int val;
    printf("Enter %d  Element :\n ", size);
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            scanf("%d",&val);
            head->data = val;
            if (size == 1)
            {
                head->next = NULL;
                return head;
            }
            Temp = head;
        }
        else
        {

            scanf("%d",&val);
            struct node *newNode = (struct node *)malloc(sizeof(struct node));
            Temp->next = newNode;
            newNode->data = val;
            newNode->next = NULL;
            Temp = newNode;
        }
    }
    return head;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    int size;
    printf("How many value you wants to store in Linked Lise :");
    scanf("%d",&size);
    head = CreateLinkedList(head, 5);

    // Traverse Linked List
    printf("All Element which  have stored in Linked List \n");
    TraverseLinkedList(head);

    return 0;
}