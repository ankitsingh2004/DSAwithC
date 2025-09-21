 #include<stdio.h>
#define MAX 100
int st[100];
int top = -1;

void push() {
    int val;
    if(top >= MAX - 1) {
        printf("Stack is overflow\n");
    } else {
        printf("Enter the value: ");
        scanf("%d", &val);
        top++;
        st[top] = val;
    }
}

void pop() {
    if(top == -1) {
        printf("Stack is underflow\n");
    } else {
        printf("Deleted element: %d\n", st[top]);
        top--;
    }
}

void display() {
    if(top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Elements in the stack: ");
        for(int i = 0; i <= top; i++) {
            printf("%d ", st[i]);
        }
        printf("\n");
    }
}
int main() {
    push();
    push();
    push();
    push();
    push();
    display();
    pop();
    pop();
    display();
    return 0;
}
