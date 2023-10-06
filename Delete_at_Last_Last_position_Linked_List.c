// Delete_at_Last_Last_position_Linked_List

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void TraversLinkedList(struct node *head)            
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int DeletionAtLast(struct node *head)             
{                                                       
    struct node* p=head; 
    struct node* q=head->next;
    while(q->next != NULL){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
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

    // Delete element at position from the Linked List.
    head = DeletionAtLast(head);
    printf("After Delete Element at Last position from the Linked List .\n");
    TraversLinkedList(head);

    return 0;
}