// CONCATENATE
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

};
void traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("element %d\n",ptr->data);

    
    ptr=ptr->next;
    }
}
struct node *concat(struct node *head1,struct node *head2){
    struct node *ptr=head1;
    struct node *temp=head2;
    while(ptr->next!=NULL)
        ptr=ptr->next;
    
        ptr->next=head2;
    
    while(temp->next!=NULL)
        temp=temp->next;
    

        temp->next=NULL;
        return head1;
    
}

int main(){
    struct node *head1;
    struct node *second1;
    struct node *third1;
    struct node *fourth1;
    head1=(struct node *)malloc(sizeof(struct node));
    second1=(struct node *)malloc(sizeof(struct node));
    third1=(struct node *)malloc(sizeof(struct node));
    fourth1=(struct node *)malloc(sizeof(struct node));
    head1->data=11;
    head1->next=second1;
     second1->data=22;
    second1->next=third1;
     third1->data=33;
    third1->next=fourth1;
     fourth1->data=44;
    fourth1->next=NULL;
    printf("\n element of linked list1 before concatenation \n  ");
    traversal(head1);


     struct node *head2;
    struct node *second2;
    struct node *third2;
    struct node *fourth2;
    head2=(struct node *)malloc(sizeof(struct node));
    second2=(struct node *)malloc(sizeof(struct node));
    third2=(struct node *)malloc(sizeof(struct node));
    fourth2=(struct node *)malloc(sizeof(struct node));
    head2->data=55;
    head2->next=second2;
     second2->data=60;
    second2->next=third2;
     third2->data=66;
    third2->next=fourth2;
     fourth2->data=77;
    fourth2->next=NULL;
    printf("\n element of linked list2 before concatenation \n  ");
    traversal(head2);

    head1=concat(head1,head2);
    printf("\nafter concatenation linkrd list\n");
    traversal(head1);
    return 0;

    
}