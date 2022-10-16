#include<stdio.h>
void work(int a,int b,int *sum,int *avg, int *prod){
    *sum=(a)+(b);
    *prod=(a)*(b);
    *avg=((a)+(b))/2;
}

int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);
    int b;
    printf("enter b:");
    scanf("%d",&b);
    int sum,prod,avg;
    work(a,b,&sum,&avg,&prod);
          
     printf("sum is: %d\nproduct is: %d\naverage is:%d",sum,prod,avg);

    return 0;
}
