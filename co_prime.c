#include<stdio.h>

int main()
{
    int n;
    printf("enter first number:\n");
    scanf("%d",&n);
    int m;
    printf("enter second number:\n");
    scanf("%d",&m);
    int hcf;
    for(int i=1;i<=n;i++){
        if (n%i==0 && m%i==0){
            hcf=i;
        }}
    
    if (hcf==1)
        printf("the numbers %d and %d  are co-prime\n",n,m);
    
    else
        printf("the numbers %d and %d are not co-prime.",n,m);
    return 0;
}
