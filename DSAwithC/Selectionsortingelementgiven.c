#include<stdio.h>
int main(){
int arr[7]={2,1,4,5,6,7,6};
int n=7;
printf("unsorted array\n ");
for(int i=0; i<n;i++){
    printf(" %d ",arr[i]);

}


printf("\n");


for(int i=0;i<n-1;i++){
    int min =i;
    for(int j=i+1; j<n;j++){
        if(arr[min]>arr[j]){
            min=j;

        }
    }
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;

}
        printf("\n ");
        printf("after sorting array");
        for(int i=0;i<n;i++){
            printf(" %d ",arr[i]);

        }
}