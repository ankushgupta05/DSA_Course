#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node TraversLinkedList(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int  DeletionAtfirst(struct node *head)
{
    struct node *ptr = head;
    head = ptr->next;
    free(ptr);
    return head ;
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

    printf("Linked List before Deletion .\n");
    TraversLinkedList(head);

    // Deletion at first position
    head = DeletionAtfirst(head);
    printf("After Delete Element at first possition .\n");
    TraversLinkedList(head);

    return 0;
}
