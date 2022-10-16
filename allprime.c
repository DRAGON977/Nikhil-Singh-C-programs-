#include<stdio.h>

int main(){
    int n;
    printf("enter range:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int factor=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                factor++;
            }
        }
        if(factor==0 && i!=1 ){
            printf("%d\t",i);
        }
    }
    return 0;
}
