#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};

struct stack *top = NULL;

void push()
{
    struct stack *temp = (struct stack *)malloc(sizeof(struct stack));
    if (temp == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter the value: ");
    scanf("%d", &temp->data);

    temp->next = top;
    top = temp;
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    struct stack *temp = top;
    top = top->next;
    free(temp);
}

void display()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    struct stack *temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int choice;
    do
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

// 1. Push
// 2. Pop
// 3. Display
// 4. Exit
// Enter your choice: 1
// Enter the value: 5
// 1. Push
// 2. Pop
// 3. Display
// 4. Exit
// Enter your choice: 1
// Enter the value: 8
// 1. Push
// 2. Pop
// 3. Display
// 4. Exit
// Enter your choice: 3
// 8 5
// 1. Push
// 2. Pop
// 3. Display
// 4. Exit
// Enter your choice: 2
// 1. Push
// 2. Pop
// 3. Display
// 4. Exit
// Enter your choice: 3
// 5
// 1. Push
// 2. Pop
// 3. Display
// 4. Exit
// Enter your choice: 4
// Exiting...
