#include<stdio.h>
int main(){
    int size,i;
    printf("enter the size of an array :");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of an arrat");
    for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    printf("entered the elements are :\n");
    for(i=0;i<size;i++){
        printf(" %d ",arr[i]);
    }
    printf("\n after reversing the elements:");
    for(i=size-1;i>0;i--){
        printf("%d",arr[i]);
    }
    return 0;

}