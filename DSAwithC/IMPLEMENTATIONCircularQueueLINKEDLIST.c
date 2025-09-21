#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL; // Initialize next pointer to NULL

    if (rear == NULL && front == NULL)
    {
        rear = newnode;
        front = newnode;
        rear->next = front; // Point to itself to maintain circular nature
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front; // Maintain the circular property
    }
}

void dequeue()
{
    struct node *temp = front;
    if (rear == NULL && front == NULL)
    {
        printf("Queue is empty\n");
    }
    else if (rear == front)
    { // Only one element in the queue
        printf("Deleted element %d\n", front->data);
        free(front);
        front = NULL;
        rear = NULL;
    }
    else
    {
        printf("Deleted element %d\n", front->data);
        front = front->next;
        rear->next = front; // Maintain the circular property
        free(temp);
    }
}

void display()
{
    if (front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    struct node *temp = front;
    do
    {
        printf("element in queue %d\n", temp->data);
        temp = temp->next;
    } while (temp != front);
}

int main()
{
    int choice, data;
    while (1)
    {
        printf("1. Insert\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data to be inserted: ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
