#include<stdio.h>
int main(){
    int r,c;
    printf("enter the number of rows and column: ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("enter the elements of the matrix: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("entered the elements are :\n");
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf(" %d ",a[i][j]);

    }
    printf(" \n ");

    }
    int sum=0;
    if(r==c){
        for(int i=0;i<r; i++){
            for(int j=0;j<c;j++){
                if(i>=j)
                    sum=sum+a[i][j];
                }
            }
            printf("the sum of lower triangular is %d: ",sum);
        }

    
    else
    printf("not possible");
    return 0;

    
}