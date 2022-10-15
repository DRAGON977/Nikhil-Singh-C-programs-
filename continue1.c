#include<stdio.h>

int main(){
    for(int i=0;i<=10;i++){
        if(i==4 || i==8)//skip the numbers given in the condition
            continue;
            printf("%d\n",i);
    }
    return 0;
}
