#include<stdio.h>
int sum(int a){
    //printf("number is :%d\n",a) ;
    if(a==1){
        return 1;
    }
    else {
        return a+sum(a-1);
    }
}

int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("sum of numbers till %d is: \t%d\n",n,sum(n));
    
    return 0;
}
