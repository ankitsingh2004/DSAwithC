#include<stdio.h>

int MAX = 100; // Maximum size of the stack

int size = 0; // Current size of the stack
int st[100];  // Stack array
int top = -1; 

void pop(){
    if(top==-1){
        printf("underflow\n");
    }
    else{
        printf("Popped element: %d\n", st[top]);
        top--;
    }
}

void push(int val) {
    if (top >= MAX - 1) { // Check if the stack is full
        printf("Stack is overflow\n");
    } else {
        top++;            // Increment top
        st[top] = val;    // Push the value onto the stack
        size++;           // Increment size of the stack
    }
}

int main(){
    push(10); // Pushing element 10 onto the stack
    push(20); // Pushing element 20 onto the stack
    push(30); // Pushing element 30 onto the stack

    printf("Popping elements from the stack:\n");
    pop(); // Popping the top element from the stack
    pop(); // Popping the top element from the stack
    pop(); // Popping the top element from the stack
    pop(); // Trying to pop from an empty stack

    return 0;
}
