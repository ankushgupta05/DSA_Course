// simple_prog_linked_list

#include <stdio.h>
#include <stdlib.h> /* This Hedder file sapports to the malloc memory */

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *forth = (struct node *)malloc(sizeof(struct node));
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
    third->next = forth;

    scanf("%d", &var);
    forth->data = var;
    forth->next = five;

    scanf("%d", &var);
    five->data = var;
    five->next = NULL;

    // printf("%d\n",head->data);            it can also allow.
    // printf("%d\n",second->data);         it can also allow.
    // printf("%d\n",third->data);         it can also allow.
    // printf("%d\n",forth->data);         it can also allow.

    printf("Your five value which you have Enered in a Liked List Value ");
    struct node *ptr;
    ptr = head;

    // while(ptr->next != NULL){    // if use this while loop than The Last value of Linked List will not print in output.

    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        // printf("%d",*ptr->next);    it prits addrass
        ptr = ptr->next;
    }

    return 0;
}
