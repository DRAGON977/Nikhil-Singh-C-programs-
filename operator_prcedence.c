#include<stdio.h>

int main(){
    int x=4;
    int y=2;

    printf("the value of 3x-8y is:%d",3*x-8*y);
    printf("\nthe value of 3x/8y is:%d",3*x/8*y);
    printf("\nthe value of 3x/8y is:%f",(3*x)/(8*y));
   //in case of same precedence order the execution id done left to right. 

    return 0;
}
