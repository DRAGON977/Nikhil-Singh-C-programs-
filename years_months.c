#include<stdio.h>
int main(){
    int days,years,month;
    printf("enter days:");
    scanf("%d",&days);
    years=days/365;
    days=days-years*365;
    month=days/30;
    days=days-month*30;
    printf("%d years, %d months, %d days\n",years,month,days);
    return 0;
     
}
