#include<stdio.h>
int sum(int a, int b){
    return a+b;

}
int sum(int a,int b);
int main(){
    


    int c;
    c=sum(12,45);
    printf("the value of c  is %d \n",c);
    return 0;

}