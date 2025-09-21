#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
void Traversal(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 11;
    head->next = second;

    second->prev = head;
    second->data = 22;
    second->next = third;

    third->prev = second;
    third->data = 33;
    third->next = NULL;
    Traversal(head);
    
}
