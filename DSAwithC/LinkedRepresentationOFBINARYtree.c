#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;

    struct node *right;
    struct node *left;
};
struct node *createnode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node)); // creta a structure ,node
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
int main()
{

    //     // constructing the first node
    // struct node *p=(struct node *)malloc(sizeof(struct node));
    //     p->right=NULL;
    //     p->left=NULL;
    // // constructin the second node
    //     struct node *p1=(struct node *)malloc(sizeof(struct node));
    //     p1->right=NULL;
    //     p1->left=NULL;

    // // constructing the  third node
    //     struct node *p2=(struct node *)malloc(sizeof(struct node));
    //     p2->right=NULL;
    //     p2->left=NULL;
    //     // linking the root node with left and right children;
    //     p->left=p1;
    //     p->right=p2;

    struct node *p = createnode(2);
    struct node *p1 = createnode(11);
    struct node *p2 = createnode(4);

    p->left = NULL;
    p->right = NULL;
    return 0;
}