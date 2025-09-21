#include <stdio.h>
#define MAX 100

int arr[MAX];
int front = -1;
int rear = -1;  

void enqueue(int data) {
    if (rear == MAX - 1) {
        printf("Queue is full.\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        arr[rear] = data;
    }
}

void dequeue() {
    if(front == -1){
        printf("Queue is empty.\n");
    } else {
        printf("Element deleted from queue is : %d\n", arr[front]);
        front++;
        if(front > rear) {
            front = rear = -1;
        }
    }
}

void currect(){
    printf("Queue is at %d place with value %d\n", front, arr[front]);
}

void display(){
    if(front == -1){
        printf("Queue is empty.\n");
    }
    else{
        int i;
        printf("Queue elements are:\n");
        for(i = front; i <= rear; i ++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

}

int main(){
//     int choice, data;
//     while(1){
//         printf("1. Enqueue\n");
//         printf("2. Dequeue\n");
//         printf("3. Display\n");
//         printf("4. Currect\n");
//         printf("5. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         switch(choice){
//             case 1:
//                 printf("Enter data to be entered: ");
//                 scanf("%d", &data);
//                 enqueue(data);
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4:
//                 currect();
//                 break;
//             case 5:
//                 return 0;
//             default:
//                 printf("Invalid choice.\n");
//         }
//     }
//     return 0;
// }
display();
enqueue(10);
enqueue(20);
enqueue(30);
dequeue();
display();
return 0;
}