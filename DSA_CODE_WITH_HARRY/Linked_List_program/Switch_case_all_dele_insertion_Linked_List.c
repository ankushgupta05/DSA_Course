#include <stdio.h>
#include <stdlib.h>

struct node *head; // can not need of This declaration
struct node *Create_LL(struct node *head, int size);
struct node *Traverse_LL(struct node *);
struct node *insert_at_begining(struct node *);
struct node *insert_at_between(struct node *);
struct node *insert_at_End(struct node *);
struct node *Deletion_at_begining(struct node *);
struct node *Deletion_at_Between(struct node *);
struct node *Deletion_at_End(struct node *);

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));

    // Create Linked List
    int size;
    printf("How many value you wants to insert in Linked Lise :");
    scanf("%d", &size);
    head = Create_LL(head, size);

    // Traverse Linked List
    // printf("The Linked List is :\n");
    Traverse_LL(head);

    int n;
    while (1)
    {
        printf("This is Home Page and Please choose one option :-\n");
        printf("1) Insertion \n");
        printf("2) Deletion \n");
        printf("3) Exit \n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            while (1)
            {
                printf("Please select one option Where You Insert Element in Linked List :-\n");
                printf("1) Insertion At the begining \n");
                printf("2) Insertion At the Between \n");
                printf("3) Insertion At the End \n");
                printf("4) Traveres Linked List \n");
                printf("5) Go To Home page \n");
                printf("6) Exit\n");
                int n2;
                scanf("%d", &n2);
                switch (n2)
                {
                case 1:
                    head = insert_at_begining(head);
                    break;
                case 2:
                    insert_at_between(head);
                    break;
                case 3:
                    insert_at_End(head);
                    break;
                case 4:
                    Traverse_LL(head);
                    break;
                case 5:
                    goto Out1;
                    break;
                case 6:
                    exit(0);
                    break;
                default:
                    printf("Select Right option .\n");
                }
            }
        Out1:

            break;
        case 2:
            while (1)
            {

                printf("Please select one option Where You Insert Element in Linked List :-\n");
                printf("1) Deletion At the begining \n");
                printf("2) Deletion At the Between \n");
                printf("3) Deletion At the End \n");
                printf("4) Traveres Linked List \n");
                printf("5) Go To Home page \n");
                printf("6) Exit\n");
                int n1;
                scanf("%d", &n1);
                switch (n1)
                {
                case 1:
                    head = Deletion_at_begining(head);
                    break;
                case 2:
                    Deletion_at_Between(head);
                    break;
                case 3:
                    Deletion_at_End(head);
                    break;
                case 4:
                    Traverse_LL(head);
                    break;
                case 5:
                    goto Out2;
                    break;
                case 6:
                    exit(0);
                    break;
                default:
                    printf("\nSelect Right option .\n");
                }
            }
        Out2:
            break;

        case 3:
            exit(0);
            break;
        default:
            printf("\nSorry Press Right key ??\n");
        }
    }

    return 0;
}

// Traverse_LL(struct node *ptr)  // We can not declaration This type specialy when we use struct node
struct node *Traverse_LL(struct node *ptr)
{
    printf("The Linked List is :\n");
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *Create_LL(struct node *head, int size)
{
    struct node *Temp;
    int val;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            scanf("%d", &val);
            head->data = val;
            if (size == 1)
            {
                head->next = NULL;
                return head;
            }
            Temp = head;
        }
        else
        {
            scanf("%d", &val);
            struct node *newnode = (struct node *)malloc(sizeof(struct node));
            Temp->next = newnode;
            newnode->data = val;
            newnode->next = NULL;
            Temp = newnode;
        }
    }
    return head;
}

struct node *insert_at_begining(struct node *head)
{
    int val;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter data which you want to insert at the begining:");
    scanf("%d", &val);
    ptr->data = val;
    ptr->next = head;
    printf("The Element %d is added  Successfully at The Begining in Linked List\n", val);
    return ptr;
}

struct node *insert_at_between(struct node *head)
{
    int index, val;
    struct node *ptr;
    ptr = head;
    // struct node* Temp;   // This Temp can hold address Link But can not Hold Entire Node
    struct node *Temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter data which you want to insert at the between Element :");
    scanf("%d", &val);
    printf("Enter index of node : ");
    scanf("%d", &index);
    Temp->data = val;
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }
    Temp->next = ptr->next;
    ptr->next = Temp;
    printf("The Element %d is added  Successfully at The b/w in Linked List \n", val);
    return head;
}

struct node *insert_at_End(struct node *head)
{
    struct node *Temp = (struct node *)malloc(sizeof(struct node));
    struct node *ptr1;
    ptr1 = head;
    // struct node* Temp;   // This Temp can hold address Link But can not Hold Entire Node
    while (ptr1 != NULL)
    {
        ptr1 = ptr1->next;
    }
    int val;
    printf("Enter data which you want to insert at the End of Linked List :");
    scanf("%d", &val);
    Temp->data = val;
    Temp->next = ptr1->next;
    ptr1->next = Temp;
    return head;
}
struct node *Deletion_at_begining(struct node *head)
{
    struct node *ptr;
    int val;
    ptr = head;
    val = ptr->data;
    head = ptr->next;
    free(ptr);
    printf("Element %d  Delete  Successfully at the begining in Linked List \n", val);
    return head;
}
struct node *Deletion_at_Between(struct node *head)
{
    struct node *p;
    int val;
    p = head;
    struct node *q;
    q = head->next;
    int index;
    printf("Enter index where you want to Delete at the B/w Element in Linked List .");
    scanf("%d", &index);
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        q = q->next;
    }
    val = q->data;
    p->next = q->next;
    free(q);
    printf("Element %d Delete Successfully at the b/w Element \n", val);
    return head;
}
struct node *Deletion_at_End(struct node *head)
{
    struct node *p;
    struct node *q;
    p = head;
    q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    int val;
    val = q->data;
    free(q);
    printf("Element %d Element successfully in Linked List \n", val);
    return head;
}
