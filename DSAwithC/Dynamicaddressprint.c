#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc and free

int main()
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }
    printf("Enter an integer: ");
    scanf("%d", ptr);
    printf("\nMemory address: %p\n", (void *)ptr);
    printf("Data at location: %d\n", *ptr); // Dereferencing ptr
    free(ptr);
    return 0;
}
