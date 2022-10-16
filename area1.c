#include<stdio.h>
int main(){
    //area of parallelogram=base*height
    int p_base;
    printf("enter the base of parallelogram:");
    scanf("%d",& p_base);
    int p_height;
    printf("enter the height of parallelogram:");
    scanf("%d",& p_height);
    printf("the area of parallelogram is:%d\n",p_base*p_height);
    //area of trapezoid=(a+b/2)*h
    int t_lbase;
    printf("enter the longer base of trapezoid:");
    scanf("%d",& t_lbase);
    int t_sbase;
    printf("enter the shorter base of trapezoid:");
    scanf("%d",& t_sbase);
    int t_height;
    printf("enter the height of the trapezoid:");
    scanf("%d", & t_height);
    printf("the area of trapezoid is:%d",((t_lbase+t_sbase)/2)*(t_height));




}
