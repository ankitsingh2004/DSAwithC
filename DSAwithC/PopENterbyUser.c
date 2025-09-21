#include <stdio.h>
int MAX = 100; // Maximum size of the stack

int size = 0; // Current size of the stack
int st[100];  // Stack array
int top = -1;

void pop()
{
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Popped element: %d\n", st[top]);
        top--;
    }
}

int main()
{
    int n, i, choice;

    printf("Enter the number of elements to be pushed onto the stack: ");
    scanf("%d", &n);

    printf("Enter %d elements to be pushed:\n", n);
    for (i = 0; i < n; i++)
    {
        int element;
        scanf("%d", &element);
        if (top < MAX - 1)
        {
            top++;
            st[top] = element;
            size++;
        }
        else
        {
            printf("Stack is overflow\n");
            break;
        }
    }

    printf("Elements pushed onto the stack:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", st[i]);
    }
    printf("\n");

    printf("Enter 1 to pop element, 0 to exit: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        pop();
    }
    else
    {
        printf("Exiting...\n");
    }

    return 0;
}
