#include <stdio.h>
int main()
{
    int size;
    printf("enter the size :");
    scanf(" %d", &size);
    int arr[size];
    printf("enter elements of the array is : ");
    for (int i = 0; i < size; i++)
    {

        scanf("%d", &arr[i]);
    }
    printf(" entered the elements are   : ");
    for (int i = 0; i < size; i++)
    {

        printf("%d", arr[i]);
    }
    printf("\n ");
    int count = 0;
    printf("\n elements of the array are:\n ");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            printf(" %d ", arr[i]);
            count++;
        }
    }

    printf("\ntotal negative elements in the array are %d  \n  ", count);

    return 0;
}