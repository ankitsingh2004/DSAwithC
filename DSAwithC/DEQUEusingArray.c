#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void deque();

int arr[MAX];
int rear = -1;
int front = -1;

int main()
{
    int ch;
    printf("\nThe maximum size of this queue is 5\n");
    printf("\nDequeue\n");
    while (1)
    {
        printf("Enter 1 to dequeue or any other key to exit: ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            deque();
        }
        else
        {
            printf("Exiting...\n");
            break;
        }
    }
    return 0;
}

void deque()
{
    if (front == -1)
    {
        printf("Queue is underflow\n");
    }
    else
    {
        printf("Element deleted from queue is %d\n", arr[front]);
        if (front == rear)
        {
        }
        else
        {
            front = front + 1;
        }
    }
}
