#include<stdio.h>
float avg(int a,int b,int c){
    float av= (float)(a+b+c)/3;
    return av;

}
int main(){
     int d;
    printf("enter the value of d:\n");
    scanf("%d", &d);
     int e;
    printf("enter the value of e:\n");
    scanf("%d", &e);
     int f;
    printf("enter the value of f:\n");
    scanf("%d", &f);
    printf("The average of %d,%d and %d is: %.2f",d,e,f,avg(d,e,f));
    return 0;
}
