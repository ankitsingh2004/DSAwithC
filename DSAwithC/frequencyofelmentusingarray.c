#include <stdio.h>

int main()
{
    int size, i, j, count;

    printf("Enter the size of elements in an array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Entered elements are: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nFrequency of each element:\n");

    for (i = 0; i < size; i++)
    {
        if (arr[i] != -1)
        {
            count = 1;
            for (j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1; // Mark as counted
                }
            }
            printf("Frequency of element %d is: %d\n", arr[i], count);
        }
    }

    return 0;
}
