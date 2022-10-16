#include<stdio.h>

int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);
    int n=a;
    int r;
    int m=0;
    while(a!=0){
        r=a%10;
        m=(10*m)+r;
        a=a/10;
    }
    printf("the reverse pair is %d,\t%d",n,m);
    return 0;
}
