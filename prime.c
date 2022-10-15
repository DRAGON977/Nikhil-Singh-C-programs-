#include <stdio.h>
int main()
{
  int n;
  printf("enter the value of n:");
  scanf("%d", &n);
  int factor = 0;
  for (int i = 2; i < n; i++)
  {
    if (n % i== 0)
    {
      factor++;
    }
  }
  if (factor > 0)
  {
    printf("%d  is not a prime number\n", n);
  }
  else
  {
    printf("%d is a prime number\n", n);
  }
  return 0;
}
