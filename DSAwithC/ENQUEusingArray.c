#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void enque();

int arr[MAX];
int rear = -1;
int front = -1;

int main()
{
    int ch;
    printf("\nThe maximum size of this queue is 5\n");
    printf("\nEnqueue\n");
    while (1)
    {
        printf("Enter 1 to enqueue or any other key to exit: ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            enque();
        }
        else
        {
            printf("Exiting...\n");
            break;
        }
    }
    return 0;
}

void enque()
{
    int add;
    if (rear == MAX - 1)
    {
        printf("Queue is overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        printf("Enter element to enqueue: ");
        scanf("%d", &add);
        rear = rear + 1;
        arr[rear] = add;
    }
}
