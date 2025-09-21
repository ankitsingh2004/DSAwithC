#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;

};
struct node *front;
struct node *rear;
void insert();
void delete();
void display();

int main(){
    int ch;
    while(ch!=4)
    {
        printf("\n *********main menu of queue********\n");
        printf("\n 1. insert\n 2.delete\n 3.display\n 4. exit\n");
        printf("\n enter your choice\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("\n enter valid choice \n");

               }
    }
}
void insert()
{
    struct node *newnode;
    int item;
    newnode =(struct node *)malloc(sizeof(struct node));
    printf("\n enter value\n");
    scanf("%d",&item);
    newnode->data=item;
    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
        front->next=NULL;
        rear->next=NULL;

    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next=NULL;

    }
}

void delete()
{
    struct node *ptr;
    if(front==NULL)
    {
        printf("\n underflow no element in queue \n");
        return;
    }
    else
    {
        printf("\n the deleted element is %d \n",front->data);
        ptr=front;

        front=front->next;
        free(ptr);

    }
}
void display()
{
    struct node *ptr;
    ptr=front;
    if(front==NULL){
        printf("\n empty queue \n");

    }
    else
    {
        printf("\n printing values...\n");
        while(ptr!=NULL)
        {
            printf("\n %d\n",ptr->data);
            ptr=ptr->next;

        }
    }
}