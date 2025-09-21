#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *inseratEnd(struct node *head, int data){
    struct node *newnode,*ptr=(struct node *)malloc(sizeof(struct node));
    newnode->data =data;
    ptr=head;
    while(ptr->next!=head){
        ptr=ptr->next;

    }
    ptr->next=newnode;
    newnode->next=head;
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
    head=inseratEnd(head,8);
printf("after insertion \n");

    linkedlisttraversal(head);
}