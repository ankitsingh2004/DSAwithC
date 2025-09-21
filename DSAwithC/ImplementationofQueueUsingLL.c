#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;

};
struct node *front=NULL;
struct node *rear=NULL;
void insert()
{
    int val;
    struct node *newnode;
    newnode =(struct node *)malloc(sizeof(struct node));
    printf("\n enter the data of your newnode");
    scanf("%d",&val);
    newnode->data=val;
    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
        rear->next=NULL;

    }
    else
    {
        rear->next=newnode;
        rear=rear->next;
        rear->next=NULL;

    }
}
void delete()
{
    struct node *ptr=front;
    if(front==NULL){
        printf("queue is full\n");

    }
    else
    {
        printf("delete element=%d",front->data);
        front=front->next;
        free(ptr);

    }
}
void display()
{
    struct node *ptr=front;
    if(front ==NULL){
    printf("queue is empty");

}
else
{
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
    
    }
}
int main(){
    insert(10);
    insert(20);
    insert(30);
    delete();
    delete();
    delete();
     display();
    return 0;

}