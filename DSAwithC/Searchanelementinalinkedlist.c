#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int search(struct node *ptr, int data)
{
    int flag = 0;
    while (ptr != NULL)
    {
        if (ptr->data == data)
        {
            flag = 1;
            break;
        }
        ptr = ptr->next;
    }
    return flag;
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

    head->data = 11;
    head->next = second;
    second->data = 22;
    second->next = third;
    third->data = 33;
    third->next = fourth;
    fourth->data = 44;
    fourth->next = NULL;
    int searchData = 33;
    if (search(head, searchData))
    {
        printf("%d found in the linked list.\n", searchData);
    }
    else
    {
        printf("%d not found in the linked list.\n", searchData);
    }

    searchData = 55;
    if (search(head, searchData))
    {
        printf("%d found in the linked list.\n", searchData);
    }
    else
    {
        printf("%d not found in the linked list.\n", searchData);
    }

    return 0;
}
