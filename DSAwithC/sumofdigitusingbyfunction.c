#include <stdio.h>
int sumofdigit(int num)
{
    if (num < 10)
        return num;

    else
        return num % 10 + sumofdigit(num / 10);
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d", &n);
    int sum = sumofdigit(n);
    printf("the sum of %d  is %d:\n", n, sum);
    return 0;
}