             /* This program is not Genrate Error THis Means This program can be Execute without Error   */

#include <stdio.h>
#include <stdlib.h>
struct node
{      
    int data;
    struct node *left;
    struct node *right;
};

struct node *creatnode(int data)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int main()
{


     struct node *p = creatnode(5);
    struct node *p1 = creatnode(2);
    struct node *p2 = creatnode(6);
   

    p->left = p1;
    p->right = p2;
    return 0;
}