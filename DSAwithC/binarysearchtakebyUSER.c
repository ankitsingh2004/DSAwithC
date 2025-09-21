#include <stdio.h>

// Function to perform binary search
int binary(int a[], int beg, int end, int element)
{
    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (a[mid] == element)
        {
            return mid;
        }
        if (a[mid] < element)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int a[20], i, n, element, result;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &element);

    result = binary(a, 0, n - 1, element);
    if (result != -1)
    {
        printf("Element found at position: %d\n", result + 1);
    }
    else
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}
