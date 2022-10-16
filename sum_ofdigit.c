#include<stdio.h>

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int num=n;
    int dsum=0;
    while(n!=0){
        int rem=n%10;
        dsum=rem+dsum;
        n=n/10;
    }
    printf("the sum of the digits of %d is:\t%d\n",num,dsum);
    return 0;
}
