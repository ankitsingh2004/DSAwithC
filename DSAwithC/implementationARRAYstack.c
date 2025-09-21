#include <stdio.h>
int st[100], choice, top = -1, n;

void push();
void pop();
void display();

int main() {
    printf("Enter the size of stack: ");
    scanf("%d", &n);
    printf("Stack operations using array:");
    printf("\n\t______________________");
    printf("\n\t1. Push\n\t2. Pop\n\t3. Display\n\t4. Exit\n");

    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
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
                printf("\n\tExiting...\n");
                break;
            default:
                printf("\n\tPlease enter a valid choice (1/2/3/4)\n");
        }
    } while (choice != 4);

    return 0;
}

void push() {
    int x;
    if (top >= n - 1) {
        printf("Stack is overflow\n");
    } else {
        printf("Enter the value to be pushed: ");
        scanf("%d", &x);
        top++;
        st[top] = x;
        printf("%d pushed into stack\n", x);
    }
}

void pop() {
    if (top <= -1) {
        printf("\n\tStack is underflow\n");
    } else {
        printf("\n\tThe popped element is %d\n", st[top]);
        top--;
    }
}

void display() {
    if (top >= 0) {
        printf("The elements in the stack are:\n");
        for (int i = top; i >= 0; i--) {
            printf("\n%d", st[i]);
        }
        printf("\nPlease enter the next choice\n");
    } else {
        printf("\nThe stack is empty\n");
    }
}
