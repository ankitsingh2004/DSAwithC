#include<stdio.h>
    void swap(int x,int y){
        int temp;
        temp=x;
        x=y;
        y=temp;
        printf(" number after swapping in swap function \n");
        printf("%d %d \n",x,y);
    }

// 12 23void swap(int x,int y);
 int main(){
    int a,b;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    printf("number before swapping:\n");
    printf("%d %d \n",a,b);
    swap(a,b);
    printf("after swappin in main function\n");
    printf("%d %d \n",a,b);
    return 0;

}