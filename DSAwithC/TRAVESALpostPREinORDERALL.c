// Left- Right-Root

#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
 struct node *left;
 struct node *right;
};
struct node *createnode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node)); // creta a structure ,node
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
// Left-Right-Root
void  postorder(struct node *root){
if(root!=NULL){
    postorder(root->left);
    postorder(root->right);
    printf(" %d ",root->data);
}
}

//  Root- Left-Right
void  preorder(struct node *root){
if(root!=NULL){
     printf(" %d ",root->data);
    preorder(root->left);
    preorder(root->right);
   
}
}

// Left-Root-Right
void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf(" %d ",root->data);
        inorder(root->right);

    }
}
int main()
{

    
    struct node *p = createnode(4);
    struct node *p1 = createnode(1);
    struct node *p2 = createnode(6);
    struct node *p3 = createnode(5);
    struct node *p4 = createnode(2);
         //  4
        //  /  \
        //  1   6
        //  / \  
        //  5   2
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
printf("preorder node =");
   preorder(p);
   printf("\n");
   printf("postorder node =");
    postorder(p);
    printf("\n");
    printf("Inorder node =");
    inorder(p);
    return 0;
}