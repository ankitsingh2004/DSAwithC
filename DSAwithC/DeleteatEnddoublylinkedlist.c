#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *deleteatEnd(struct node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return NULL;
    }

    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    if (ptr->prev != NULL)
    {
        ptr->prev->next = NULL;
        free(ptr);
    }
    else
    {
        free(head);
        head = NULL;
    }
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
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 11;
    head->next = second;

    second->prev = head;
    second->data = 22;
    second->next = third;

    third->prev = second;
    third->data = 33;
    third->next = NULL;

    head = deleteatEnd(head);
    traversal(head);
    return 0;
}
