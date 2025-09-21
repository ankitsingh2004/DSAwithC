#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *insertatfirst(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = head;

    if (head != NULL) // Check if the list is not empty
        head->prev = newnode;

    return newnode; // Return the new head
}
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

    head = insertatfirst(head, 8);
    Traversal(head);
    return 0;
}
