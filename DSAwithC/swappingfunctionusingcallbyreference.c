#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    printf("Number before swapping in swap function:\n");
    printf("%d %d\n", *x, *y);
    temp = *x;
    *x = *y;
    *y = temp;
    printf("Number after swapping in swap function:\n");
    printf("%d %d\n", *x, *y);
}

int main() {
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b); // Removed \n after %d %d
    printf("Number before swapping in main function: ");
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("Number after swapping in main function: ");
    printf("%d %d\n", a, b);
    return 0;
}
