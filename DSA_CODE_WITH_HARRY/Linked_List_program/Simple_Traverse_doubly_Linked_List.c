// Simple_Traverse_doubly_Linked_List

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *previos;
    struct node *next;
};

void Traverse_in_reverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->previos;
    }
}
void TraverseDoublyLinkedList(struct node *head)
{
    struct node *ptr = head;
    printf("All data of Linked List in a Simple Order.\n");
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->previos = NULL;
    head->next = second;

    second->data = 20;
    second->previos = head;
    second->next = third;

    third->data = 30;
    third->previos = second;
    third->next = fourth;

    fourth->data = 40;
    fourth->previos = third;
    fourth->next = NULL;

    TraverseDoublyLinkedList(head);
    return 0;
}