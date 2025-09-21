#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;

};
void linkedlisttraversal(struct node *ptr){
    while(ptr!=NULL){
 printf("elements %d\n",ptr->data);
 ptr=ptr->next;
    }
}
// case 3
struct node *insertatend(struct node*head,int data ){

    struct node*ptr=(struct node*)malloc (sizeof(struct node));
    ptr->data=data;
    struct node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
       p->next=ptr;
        ptr->next=NULL;
        return head;
    }

int main(){
    struct node  *head;
    struct node *second;
    struct node *third;
    struct node *fourth ;


     // Allocate memory for nodes in the linked list in Heap
    head=(struct node *)malloc(sizeof(struct node));
     second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
     fourth=(struct node *)malloc(sizeof(struct node));
     
      // Link first and second nodes
     head->data=11;
     head->next=second;

     // Link second and third nodes
     second->data=23;
     second->next=third;

      // Link third and fourth nodes

     third->data=24;
     third->next=fourth;

     // Terminate the list at the third node

     fourth->data=55;
     fourth->next=NULL;

     printf("linked list before insertion \n");
     linkedlisttraversal(head);

     head = insertatend(head,58);

    printf("\n linked list after insertion \n");
    linkedlisttraversal(head);
    return 0;

}