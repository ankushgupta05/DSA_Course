// Delete_element_at_Between_from_Linked_List

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

// struct node DeletionAtIndex(struct node *head,int index) / Fuction for Deleting at specific index */        /* this show Line Erroe */
int  DeletionAtIndex(struct node *head,int index) 
{
    struct node *p = head;
    struct node *q=head->next;
    int i=0;
    while(i != index-1){
        p=p->next;
        q=q->next;
        i++;
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

    printf("Linked List before Deletion .\n");
    TraversLinkedList(head);

    // Deletion at specific index .
    int index;
    printf("Enter index( 0 to 4 ) those you want to delete from Linked List :");
    scanf("%d",&index);
    head = DeletionAtIndex(head,index);
    printf("After Delete Element at index  %d :\n",index);
    TraversLinkedList(head);

    return 0;
}