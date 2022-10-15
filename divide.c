#include<stdio.h>
#include <stdlib.h>
int main()
{
      int num1,num2,div;
      printf("Enter Two Numbers\n");
      printf("---------------------------\n");
      printf("Enter First Number : ");
      scanf("%d", &num1);

      
      printf("Enter Second Number : ");
      scanf("%d",&num2);
      div=num1/num2;
      printf("\nDivision of %d and %d is = %f",num1,num2,div);
      return 0;
}
