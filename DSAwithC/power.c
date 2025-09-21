#include <stdio.h>
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        int rec = a * power(a, b - 1);

        return rec;
    }
}
int main()
{
    int a, b;
    printf("enter a and b:");
    scanf("%d %d", &a, &b);
    printf("%d raised to the power %d is  %d ", a, b, power(a, b));
    return 0;
}