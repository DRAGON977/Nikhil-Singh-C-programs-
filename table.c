#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enetr the number for its table:");
    scanf("%d",&n);
    int a=10*n;
    
    int i=n;
    while(i<=a){
        printf("%d\n",i);
        i=i+n;
    }
   return 0;
}    
