#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;

};
void traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("element %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node *deleteatfirst(struct node *head){
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    return head;

}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    head->data=11;
    head->next=second;
    second->data=22;
    second->next=third;
    third->data=33;
    third->next=fourth;
    fourth->data=44;
    fourth->next=NULL;
    printf("before deletion \n");
    traversal(head);
    head=deleteatfirst(head);
    printf("\n after deletetion \n ");
    traversal(head);
    return 0;

}