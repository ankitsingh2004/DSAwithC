#include <stdio.h>
int factorial(int num)
{

  if (num == 0)
    return 1;
  else
    return num * factorial(num - 1);
}
int main()
{
  int n;
  printf("enter the positive integer :");
  scanf("%d", &n);

  int fact = factorial(n);
  printf("\n factorial of %d is %d", n, fact);
}
