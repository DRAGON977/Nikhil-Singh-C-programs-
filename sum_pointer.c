#include<stdio.h>
//call by value and call by address
int sum(int a,int b){     //call by value
    int c=a+b;
    return c;
}
int main(){
    int a , b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("sum is:%d",sum(a,b));
    
    return 0;
}
