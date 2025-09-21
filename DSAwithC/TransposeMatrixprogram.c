#include <stdio.h>
int main()
{
    int r, c;
    printf("enter the num of rows and column:");
    scanf("%d %d", &r, &c);

    int mat[r][c], trans[c][r];
    printf("enter matrix elements :");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("enterd the elements are : ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d ", mat[i][j]);
        }
        printf(" \n ");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            trans[j][i] = mat[i][j];
        }
    }

    printf("transpose elements \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf(" %d ", trans[i][j]);
        }
        printf(" \n ");
    }

    return 0;
}
