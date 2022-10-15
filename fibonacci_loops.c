#include<stdio.h>

int main(){
    int n,n1=0,n2=1,n3;
    printf("enter n:\n");
    scanf("%d",&n);
    printf("%d\t%d",n1,n2);
    for(int i=0;i<n;i++){
        n3=n2+n1;
        printf("\t%d",n3);
        n1=n2;
        n2=n3;
    }

    return 0;
}
