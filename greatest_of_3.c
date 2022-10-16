#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three Numbers\n");
  printf("---------------------------\n");
  printf("Enter first number:- ");
  scanf("%d", &a);
  printf("Enter second number:- ");
  scanf("%d", &b);
  printf("Enter thrid number:- ");
  scanf("%d", &c);
 if(a>b && b>c){
    printf("greatest number is:""%d",a);
 }
 else if(b>c && c>a){
    printf("greatest number is:""%d",b);
 }
 else{
    printf("greatest number is:""%d",c);
 }
 return 0;
}
