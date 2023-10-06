// Simple_Circuler_Linked_List

/* Creat a Circuler Linked List */

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *TraversCirculerLinkedList(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *five = (struct node *)malloc(sizeof(struct node));

    int var;
    printf("Enter five  value which you insert in a Linked List :\n");
    scanf("%d", &var); // scanf("%d",&head->data);   it can be also posible.
    head->data = var;
    head->next = second;

    scanf("%d", &var);
    second->data = var;
    second->next = third;

    scanf("%d", &var);
    third->data = var;
    third->next = fourth;

    scanf("%d", &var);
    fourth->data = var;
    fourth->next = five;

    scanf("%d", &var);
    five->data = var;
    five->next = head;

    // Traverse Circulor Linked List .
    printf("The Circuler Linked List  .\n");
    TraversCirculerLinkedList(head);

    return 0;
}