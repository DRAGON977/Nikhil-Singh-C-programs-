#include<stdio.h>

int main(){
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
    int space = n-1,num=1; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int k=1;k<=num;k++){
            printf("%d",k);
        }
        if(space>i){
            space= space-1;
            num = num +2;
        }
        if(space<i){
            space = space +1;
            num = num -2;
        }
        printf("\n");

    }
    return 0;
}
/* 
    1
   121
  12321
   121
    1
    */
