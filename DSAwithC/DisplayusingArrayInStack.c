#include<stdio.h>
int max=100;
int size=0;
int st[100];
int top=-1;
void displaystack(){
    if(top==-1){
        printf("stack is empty");
        return ;

    }
    else{
        printf("element pushed onto the  stack \t \n " );
        for(int i=0;i<=top;i++){
            printf("%d",st[i]);

        }
        printf(" \n ");

    }
}
int main(){
    int n;
    printf("enter the element to pushed onto the stack :\n");
    scanf("%d",&n);
    printf("\nenter %d element to be pushed on stack \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&st[i]);
        
        top++;
        size++;

    }

    displaystack();
    return 0;
    
}