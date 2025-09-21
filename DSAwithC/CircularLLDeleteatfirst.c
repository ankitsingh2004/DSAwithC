#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    
};
// struct node *deleteatfirst(struct *head,int data){
// struct node *ptr,*temp = (struct node *)malloc(sizeof(struct node));
// temp=ptr->head;
// while(ptr!=head){
//     ptr=ptr>next;
// }
//     ptr->next=temp->next;
//     temp=head;
//     free(temp);
// }
struct node *deleteatfirst(struct node *head, int data) {
    struct node *ptr = head;
    struct node *temp = head;

    while (ptr->next != head) {
        ptr = ptr->next;
    }
    
    ptr->next = temp->next;
    head = temp->next;
    free(temp);
    return head;
}
void linkedlisttraversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("element is %d \n ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 3;
    head->next = second;
    second->data = 4;
    second->next = third;
    third->data = 6;
    third->next = fourth;
    fourth->data = 1;
    fourth->next = head;
    printf("circular linked list before insertion \n");
    linkedlisttraversal(head);
    head=deleteatfirst(head,3);
     printf("after insertion \n");

    linkedlisttraversal(head);
}