#include<stdio.h>
int main(){
    int x=10;
    int  y=34;
x=x^y;
y=x^y;
x=x^y;
printf("the valueof x is %d\n",x);
printf("the value of y is %d\n ",y);
return 0;
}