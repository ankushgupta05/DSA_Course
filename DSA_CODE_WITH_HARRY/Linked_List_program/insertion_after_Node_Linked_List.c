// insertion_after_Node_Linked_List

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

struct node *insertionAfterNode(struct node *head, struct node *pre_node, int n)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = n;
    ptr->next = pre_node->next;
    pre_node->next = ptr;
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

    //  insertion Element at a specific index and it aplicable upto index(1 to 5) .
    int n;
    printf("Enter data which you insert where you Enter position Linked List :");
    scanf("%d", &n);
    head = insertionAfterNode(head, second, n); // after second or (which you prefer) element will be insert.
    TraversLinkedList(head);
    return 0;
}