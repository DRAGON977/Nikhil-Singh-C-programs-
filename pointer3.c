#include<stdio.h>

int main(){
int a;
printf("enter a:");
scanf("%d",&a);
int *b=&a;
int **c=&b;
printf("%d\n",a);//value of a
printf("%u\n",&a);//address of a
printf("%d\n",*b);//value of a
printf("%d\n",b);//addres of a
printf("%u\n",&b);//address of b
printf("%d\n",*c);//address of a 
printf("%d\n",**c);//value of a
printf("%d\n",c);//address of b
printf("%u\n",&c);//address of c

    return 0;
}
