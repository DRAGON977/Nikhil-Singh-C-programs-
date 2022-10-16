#include<stdio.h>
int main(){
    int a;
    printf("Enter first number:- ");
    scanf("%d", &a);
     int b;
    printf("Enter second number:- ");
    scanf("%d", &b);
    int product=0;
    for (int i=1;i<=b;i++){
        product=product+a;
    }
        printf("the product of %d and %d is : %d",a,b,product);
    

   
    
  return 0;
}


