#include<stdio.h>
//swapping of numbers.
int main(){
int a,b ;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);

int c=a+b;
b=c-b;
a=c-a;
printf("the new value of a is :  %d\n",a);
printf("the new value of b is :  %d",b);
return 0;
}

