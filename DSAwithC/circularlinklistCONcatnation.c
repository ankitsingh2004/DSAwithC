#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void traversal(struct node *head){
    struct node *ptr=head;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
        while(ptr!=head); 
}
struct node *concat(struct node *head1,struct node *head2){
struct node *ptr=head1;
struct node *temp=head2;
while(ptr->next!=head1)
ptr=ptr->next;
ptr->next=head2;
while(temp->next!=head2)
temp=temp->next;
temp->next =head1;
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

     head1->data = 11;

head1->next = second1;
second1->data = 22;
second1->next = third1;
third1->data = 33;
third1->next = fourth1;
fourth1->data = 44;
fourth1->next = head1;
printf("\nElements of Circular Linked List 1 before concatenation:\n");
traversal(head1);
struct node *head2 = (struct node *)malloc(sizeof(struct node));
struct node *second2 = (struct node *)malloc(sizeof(struct node));
struct node *third2 = (struct node *)malloc(sizeof(struct node));
struct node *fourth2 = (struct node *)malloc(sizeof(struct node));
head2->data = 55;
head2->next = second2;
second2->data = 66;
second2->next = third2;
third2->data = 77;
third2->next = fourth2;
fourth2->data = 88;
fourth2->next = head2;
printf("\nElements of Circular Linked List 2 before concatenation:\n");
traversal(head2);
head1=concat(head1,head2);
printf("\nElements of Circular Linked List 1 after concatenation:\n");
traversal(head1);
return 0;
}


