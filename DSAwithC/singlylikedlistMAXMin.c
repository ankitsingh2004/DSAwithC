#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void maximum(struct node *ptr) {
    int max = ptr->data;
    int min = ptr->data;

    while(ptr != NULL) {
        if(ptr->data > max) {
            max = ptr->data;
        }
        if(ptr->data < min) {
            min = ptr->data;
        }
        ptr = ptr->next;
    }

    printf("max = %d, min = %d\n", max, min);
}

int main() {
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    struct node *fourth = (struct node*)malloc(sizeof(struct node));

    head->data = 11;
    head->next = second;
    second->data = 22;
    second->next = third;
    third->data = 33;
    third->next = fourth;
    fourth->data = 44;
    fourth->next = NULL;

    maximum(head);

    return 0;
}
