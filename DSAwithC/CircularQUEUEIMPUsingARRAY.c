#include <stdio.h>
#define MAX 5

int arr[MAX];
int rear = -1;
int front = -1;

void insert(int x);
void delete();
void display();

void insert(int x) {
    if ((rear + 1) % MAX == front) {
        printf("Queue is overflow\n");
    } else if (front == -1 && rear == -1) {
        front = 0;
        rear = 0;
        arr[rear] = x;
    } else {
        rear = (rear + 1) % MAX;
        arr[rear] = x;
    }
}

void delete() {
    if (front == -1 && rear == -1) {
        printf("Queue is underflow\n");
    } else if (front == rear) {
        printf("The deleted element from queue is %d\n", arr[front]);
        front = -1;
        rear = -1;
    } else {
        printf("The deleted element from queue is %d\n", arr[front]);
        front = (front + 1) % MAX;
    }
}

void display() {
    int i;
    if (front == -1 && rear == -1) {
        printf("Queue is underflow\n");
    } else {
        printf("Queue elements are: ");
        for (i = front; i != rear; i = (i + 1) % MAX) {
            printf("%d ", arr[i]);
        }
        printf("%d\n", arr[i]); // To print the last element
    }
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    display();

    delete();
    delete();
    delete();
    display();

    insert(50);
    insert(60);
    display();

    return 0;
}
