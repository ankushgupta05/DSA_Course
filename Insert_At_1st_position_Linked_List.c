#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

// void TraversLinkedList(struct node head)
struct node TraversLinkedList(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int insertionAtFirst(struct node *head)  /* struct can not be write here bcz we  give return value */
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    int n;
    printf("Enter a value Which You insert at 1st position in Linked List :");
    scanf("%d", &n);
    ptr->data = n;
    ptr->next = head;
    return ptr;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *forth = (struct node *)malloc(sizeof(struct node));
    struct node *five = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = forth;

    forth->data = 40;
    forth->next = five;

    five->data = 50;
    five->next = NULL;

    printf("Linked List before insertion .\n");
    TraversLinkedList(head);

    // insertion at first position
    head = insertionAtFirst(head);
    printf("After insert Element at first possition .\n");
    TraversLinkedList(head);

    return 0;
}
