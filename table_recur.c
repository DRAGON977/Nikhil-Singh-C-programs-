#include<stdio.h>
int table(int n){
    if(n==0){
        return ;
    }
    else
    {for(int i=1;i>=10;i++){
        return (i*n);

    }
    }
}

int main(){
    int a;
    printf("enter a:");
    scanf("%d",a);
    printf("the table of %d is:\n %d\n",a,table(a));
    
    return 0;
}
