#include<stdio.h>

int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    float sum=0;
    for(float i=1;i<=n;i++){
       // float c=1/i;
        sum=sum+1/i;
    }
    
        printf("the sum of numbers is :%f ",sum);
    
    return 0;
}                                                                                                                                                                                            
