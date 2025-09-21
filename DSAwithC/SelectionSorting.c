#include <stdio.h>

int main() {
    int a[20], n, i, temp, j;
    
    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Selection sort algorithm
    for(i = 0; i < n - 1; i++) {
        int min = i; // Set the initial minimum position
        for(j = i + 1; j < n; j++) {
            if(a[j] < a[min]) { // Correct condition to find the minimum element
                min = j; // Update the position of the new minimum element
            }
        }
        if(min != i) {
            // Swap the found minimum element with the first element
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }

        // Print the array after each pass
        printf("Array after pass %d: ", i + 1);
        for(int k = 0; k < n; k++) {
            printf("%d ", a[k]);
        }
        printf("\n");
    }
    
    printf("Sorted array using selection sort: \n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}