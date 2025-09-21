#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

};
int count(struct node *ptr){
    int count=0;
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;

    }
    return count;
}
int main(){
    struct node *head;
    struct node *second;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));

    head->data=10;
    head->next=second;
    second->data=20;
    second->next=NULL;

    printf("\n number of nodes %d \n",count(head));
    return 0;
}