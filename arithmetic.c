#include <stdio.h>
int main()
{
  int x, y;
  printf("Enter Two Numbers\n");
  printf("---------------------------\n");
  printf("Enter first number:- ");
  scanf("%d", &x);
  printf("Enter second number:- ");
  scanf("%d", &y);

  int z = x + y;

  printf("Sum of the numbers = %d\n", z);

  int s = x-y;
  printf("difference of the numbers =%d\n",s);


  float m = x*y;
  printf("multipication of the numbers =%f\n",m);


  float d = (float)x/(float)y;
  printf("division of the numbers =%f\n",d);

  return 0;
}
