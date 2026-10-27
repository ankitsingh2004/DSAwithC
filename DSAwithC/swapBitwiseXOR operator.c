#include<stdio.h>
int main(){
    int x=10; // 001010
    int y=34; // 100010
x=x^y;  // 001010 ^ 100010 = 101000
y=x^y;  // 101000 ^ 100010 = 001010 
x=x^y; //  101000 ^ 001010 = 100010
printf("the valueof x is %d\n",x);
printf("the value of y is %d\n ",y);
return 0;
}
     
