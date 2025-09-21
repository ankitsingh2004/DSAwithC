#include <stdio.h>
// call by value
int sum(int x, int y)
{
    int c;
    c = x + y;
    return c;
}
int main()
{
    int a = 23, b = 45;
    int c = sum(a, b);
    printf("sum of %d and %d is:  %d", a, b, c);
    return 0;
}