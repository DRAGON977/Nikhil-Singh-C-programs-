#include<stdio.h>

int main(){
    for(int i=0;i<=10;i++){
        if(i==4){
            break;//teriminate the loop
        }
        printf("%d\n",i);
    }
    return 0;
}
