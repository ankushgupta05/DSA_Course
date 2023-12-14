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
        inorder(root->right);
    }
}
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d  ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf(" %d  ", root->data);
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

    // Our Bineary Tree Looks Like this :-
    //           10
    //          /   \
//        20     30
    //       /  \    
//      40   50

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    printf("Pre  order  node :");
    preorder(p);
    printf("\n\n");
    printf("In  order  node  :");
    inorder(p);
    printf("\n\n");
    printf("Post order node  :");
    postorder(p);

    return 0;
}