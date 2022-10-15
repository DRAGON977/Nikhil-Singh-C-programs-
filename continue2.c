#include<stdio.h>

int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        if (i!=a){
        continue;
    }
    
     printf("%d",i);
    }
    return 0;
}
