#include <stdio.h>

int MAX = 100; // Maximum size of the stack

int size = 0; // Current size of the stack
int st[100];  // Stack array
int top = -1; // Top of stack

void push(int val)
{
    if (top >= MAX - 1)
    { // Check if the stack is full
        printf("Stack is overflow\n");
    }
    else
    {
        top++;         // Increment top
        st[top] = val; // Push the value onto the stack
        size++;        // Increment size of the stack
    }
}

int main()
{
    int n, i, val;

    printf("Enter the number of elements to be pushed onto the stack: ");
    scanf("%d", &n);

    printf("Enter %d elements to be pushed:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &val); // Input each element
        push(val);         // Push the element onto the stack
    }

    printf("Elements pushed onto the stack:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", st[i]); // Print each element pushed onto the stack
    }
    printf("\n");

    return 0;
}
