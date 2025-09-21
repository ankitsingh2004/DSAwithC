#include <stdio.h>
int main()
{
    int rows, column;
    printf("enter the number of rows and columns:");
    scanf("%d %d", &rows, &column);
    int a[rows][column];
    printf("enter the elements of the matrix \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("entered the elements are : \n ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf(" \n ");
    }
    int sum = 0;
    if (rows == column)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (i <= j)
                    sum = sum + a[i][j];
            }
        }

        printf("\n sum of upper triangular matrixe is %d", sum);
    }
    else
    {
        printf("not possible");
    }
    return 0;
}
