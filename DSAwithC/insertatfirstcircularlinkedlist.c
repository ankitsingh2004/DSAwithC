#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};




void  linkedlisttraversal(struct node *head){
struct node *ptr=head;
do{
 printf("element is %d \n ",ptr->data);
ptr=ptr->next;
}
while(ptr!=head);

} 
struct node *inseratfirst(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node ));
  ptr ->data=data;
   struct node *p=head->next;
   while(p->next!=head){
    p=p->next;

   }
//    \\at this point p points to the point last node of the circular linked lise

p->next=ptr;
ptr->next=head;
head=ptr;
return head;
}


int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
 
 head->data =3;
 head->next=second;
 second->data=4;
 second->next=third;
 third->data=6;
 third->next=fourth;
 fourth->data=1;
 fourth->next=head;


printf("circular linkedlist before insertion \n");


 linkedlisttraversal(head);

head = inseratfirst(head,54);
printf("after insertion circular linkedlist \n");
linkedlisttraversal(head);
 }