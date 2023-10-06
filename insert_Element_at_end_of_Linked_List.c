// insert_Element_at_end_of_Linked_List

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

struct node *insertionAtLast(struct node *head, int n)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = n;
    ptr->next = p->next;
    p->next = ptr;
    return head;
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

    // insertion at the last position
    int n;
    printf("Enter value Those you want to insert in a Last of the Linked List :");
    scanf("%d", &n);
    head = insertionAtLast(head, n);
    printf("After insert Element at first possition .\n");
    TraversLinkedList(head);

    return 0;
}
