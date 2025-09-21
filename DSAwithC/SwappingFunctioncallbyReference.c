#include<stdio.h>
// call by reference 
void swap(int* x, int* y){
    int temp =*x;
    *x=*y;
    *y=temp;

}
int main(){
    int x=12, y=24;
    printf("before swapping : x = %d y =  %d\n",x,y);
    // calling the function 
    swap(&x,&y);
    printf("after swapping x =  %d   y = %d\n",x,y);
    return 0;

}