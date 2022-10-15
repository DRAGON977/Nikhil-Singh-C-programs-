#include<stdio.h>
int area(int side){
    int a=side*side;
    return a;
    }

int main(){
    int b;
    printf("enter side:");
    scanf("%d",&b);
    printf("the area is :%d",area(b));
    
    return 0;
}
