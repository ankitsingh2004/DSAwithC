#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *deleteatfirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    head->prev = NULL;
    free(ptr);
    return head;
}
void traversal(struct node *head)
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

    head = deleteatfirst(head);
    traversal(head);
    return 0;
}
