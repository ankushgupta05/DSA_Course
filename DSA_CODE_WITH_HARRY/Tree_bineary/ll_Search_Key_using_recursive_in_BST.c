#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 100
int arr[SIZE];
int Top = -1;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *creatnode(int data)
{

    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf(" %d  ", root->data);
        Top++;
        arr[Top] = root->data;
        inorder(root->right);
    }
}

bool check_BinearySerachTree(int arr[], int Top)
{
    int i = 0, Temp = -1;
    while (i != Top + 1)
    {
        if (Temp < arr[i])
        {
            Temp = arr[i];
        }
        else
        {
            return false;
        }
        i++;
    }
    return true;
}

struct node *Recursive_search(struct node *root, int key)
{
    if (root == NULL)
        ;
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (key < root->data)
    {
        return Recursive_search(root->left, key);
    }
    else
    {
        return Recursive_search(root->right, key);
    }
}

int main()
{

    // create node
    struct node *p = creatnode(5);
    struct node *p1 = creatnode(2);
    struct node *p2 = creatnode(6);
    struct node *p3 = creatnode(1);
    struct node *p4 = creatnode(3);

    // Our Bineary Search Tree Looks Like this :-
    //            5
    //          /   \
    //         2     6
    //       /  \    
    //      1    3

    // Path seting
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("In  order  node  :");
    inorder(p);
    printf("\n");

    //  check bineary tree
    if (check_BinearySerachTree(arr, Top))
    {
        printf("The Tree is Bineary Search Tree .\n");
    }
    else
    {
        printf("The Tree is Not Bineary Search Tree .\n");
    }

    //  find key value using Recursive in Bineary search tree .

    //  NOTE : This block of code Does not Give right Output further investication is required  .
    int value;
    value = 1;
    struct node *n = Recursive_search(p, value);
    if (n != NULL)
    {
        printf("The key is exit in Tree = %d\n", n->data);
    }
    else
    {
        printf("The key is Not exit in Tree = %d\n", value);
    }
    return 0;
}