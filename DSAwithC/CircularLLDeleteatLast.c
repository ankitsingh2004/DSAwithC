#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *deleteatlast(struct node *head) {
    if (head == NULL)
        return NULL;
    
    struct node *prev = NULL;
    struct node *ptr = head;
    
    while(ptr->next != head){
        prev = ptr;
        ptr = ptr->next;
    }
    
    if(ptr == head){
        free(head);
        return NULL;
    }
    else{
        prev->next = head;
        free(ptr);
        return head;
    }
}

void linkedlisttraversal(struct node *head) {
    if (head == NULL)
        return;
    
    struct node *ptr = head;
    do {
        printf("element is %d \n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

int main() {
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

    printf("Circular linked list before deletion:\n");
    linkedlisttraversal(head);

    head = deleteatlast(head);

    printf("\nCircular linked list after deletion:\n");
    linkedlisttraversal(head);

    return 0;
}
