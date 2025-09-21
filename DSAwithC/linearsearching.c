#include <stdio.h>
#include <stdlib.h>

int a[20], n, element, i, flag = 0;

int main() {
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter an element to be searched: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (a[i] == element) {
            printf("%d is present at location %d\n", element, i + 1);
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("%d is not present in the array\n", element);
    }

    return 0;
}
