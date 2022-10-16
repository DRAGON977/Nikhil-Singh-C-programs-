#include<stdio.h>

int main(){
    int a;
    printf("enter a number:\n");
    scanf("%d",&a);
    if(a>0)
    {printf("The number %d is positive.\n",a);}
    else if(a<0){
        printf("The number %d is negative.\n",a);
    }
    else {
        printf("The number %d is zero.\n",a);
    }

    return 0;
}
