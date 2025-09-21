#include <stdio.h>
int main() {
    int a[20], n, i, temp, j;
    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Bubble sort algorithm
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        
        // Print the array after each pass
        // printf("Array after pass %d: ", i + 1);
        // for(int k = 0; k < n; k++) {
        //     printf("%d ", a[k]);
        // }
        // printf("\n");
    }
    
    printf("Sorted array using bubble sort: \n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
  