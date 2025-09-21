#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
    struct node *front=NULL;
    struct node *rear=NULL;
    void insert(int val){
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=val;
        newnode->next=NULL;
        if(front==NULL){
            front=newnode;
            rear=newnode;

        }
        else{
            rear->next=newnode;
            rear=rear->next;

        }
    }
    void delete(){
        struct node *ptr=front;
        if(front==NULL){
            printf("queue is empty\n");

        }
        else{
            printf("deleted element = %d\n",front->data);
            front = front->next;
            free(ptr);

        }

    }
    void display(){
        struct node *ptr =front;
        if(front==NULL){
            printf("queue is empty\n");
        }
        else{
            printf("queue  element  ");
            while(ptr!=NULL){
                printf(" %d",ptr->data);
                ptr=ptr->next;

            }
            printf("\n");

        }
    }
    int main(){
        insert(10);
        insert(20);
        insert(30);
        printf("after inserting element \n:");
         display();
         delete();
         delete();
         display();
    }
