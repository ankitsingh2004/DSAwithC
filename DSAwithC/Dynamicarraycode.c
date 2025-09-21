#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, *ptr, n, sum = 0;
    printf("enter the  number of elements:\n ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("memory not allocate:");
        return 1;
    }
    else
    {
        printf("enter the elements:\n ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }

        printf("entered elements are :\n");

        for (int i = 0; i < n; i++)
        {
            printf("  %d  ", *(ptr + i));
            sum = sum + *(ptr + i);
        }
        printf("\n sum =%d", sum);
        free(ptr);
    }
    return 0;
}