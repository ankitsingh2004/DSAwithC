#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void insert();
void del();
void display();
void status();
int arr[MAX];
int rear=-1;
int front=-1;
int main(){
    int ch;
    printf("NOTE: The maximum size of this queue is 5.\n");
    printf("1. insert(enqueue)\n 2. delete(dequeue)\n 3.display\n 4.current status \n 5.exit \n\n");
    while(1)
    {
        printf("\n please enter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            insert();
            break;
            case 2:
            del();
            break;
            case 3:
            display();
            break;
            case 4:
            status();
            break;
            case 5:
            exit(1);
            default:
            printf("please enter valid option \n");

        }
    }
}
void insert()
{
    int add;
    if(rear==MAX-1){
        printf("\n queue is overflow \n you cannot enter anymore elements in this queue \n");
    }
        else
        {
            if(front==-1)
            front=0;
            printf("enter elements  to insert");
            scanf("%d",&add);
            rear=rear+1;
            arr[rear]=add;

        }
    }
void del()
{
    if(front==-1||front>rear)
    {
        printf("\n queue underflow\n");
        return;

    }
    else
    {
        printf("element deleted from queue is %d\n",arr[front]);
        front=front + 1;

    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("\n queue is empty\n");

    }
    else
    {
        printf("queue is:\n ");
        for(i=front;i<=rear;i++){
            printf("%d",arr[i]);
            printf("\n");
                    }
    }
}
void status()
{
    printf("\n you have entered %d elements in this queue \n",rear+1);
    if(((MAX-1)-rear)==0){
        printf("\n the queue is full");

    }
    else
    {
         printf("more element inserted in queue %d\n",(MAX-1)-rear);
         
    }
}