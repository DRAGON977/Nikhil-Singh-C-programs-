#include<stdio.h>
int fib(int n){
    //printf("The fibonacci series for %d\n",n);
    if(n==1 || n==0){
        return 1;
    }
    else{
        return  fib(n-1)+fib(n-2);
    }
}

int main(){
    int a;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("the fibonnaci series for %d is: %d\n \t",a,fib(a));
    return 0;
}
