#include<stdio.h>
int main(){
int a;
int b;
printf("entertwo numbers");
scanf("%d %d",&a,&b);
int temp;
temp=a;
a=b;
b=temp;
printf("the value of %d \n",a);
printf("the vale of %d is \n",b);
return  0;

}