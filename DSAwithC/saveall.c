#include<stdio.h>
void swap(int x,int y){
    int c;
    c=x;
    x=y;
    y=c;
    printf("after swaping in swap function\n");
     printf("%d%d",x,y);

}
int main(){
    int a, b;
    printf("enter a and b ");
    scanf("%d%d",&a, &b);
    printf("number beforee swapping in main function\n");
    printf("%d%d",a,b);
    swap(a,b);
    // printf("numbers after swapping in main function ");
    // printf("%d%d",a,b);
    return 0;

}