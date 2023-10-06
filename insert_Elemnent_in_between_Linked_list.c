// insert_Elemnent_in_between_Linked_list

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

struct node *insertionAtindex(struct node *head, int index, int n)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
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

    printf("Linked List before Deletion .\n");
    TraversLinkedList(head);

    //  insertion Element at a specific index and it aplicable upto index(1 to 5) .
    int n, index;
    printf("Enter indexition where you want to set data :");
    scanf("%d", &index);
    printf("Enter data which you insert in Linked List :");
    scanf("%d", &n);
    head = insertionAtindex(head, index, n);
    TraversLinkedList(head);
    return 0;
}
