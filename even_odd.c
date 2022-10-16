#include <stdio.h>
int main()
{
  int x;
  
  printf("Enter number:");
  scanf("%d", &x);
  if(x%2 ==0){
    printf("the given number is even\n");
  }
  else{
    printf("the number is odd\n");
  }
 return 0; 
}
  
