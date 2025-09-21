#include <stdio.h>
#include <stdlib.h>

// Define structure for stack node
struct stack {
    int data;
    struct stack *link;
};

// Declare top pointer
struct stack *top = NULL;

// Function to push element onto the stack
void push() {
    // Allocate memory for new node
    struct stack *temp = (struct stack *)malloc(sizeof(struct stack));
    
    // Read data from user
    printf("Enter the value: ");
    scanf("%d", &temp->data);
    
    // Make the new node point to the current top node
    temp->link = top;
    
    // Update top to point to the new node
    top = temp;
}

int main() {
    // Call push function to test
    push();
    return 0;
}
