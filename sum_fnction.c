#include<stdio.h>
//sum is a function which takes a and b as input and
//retuns an integer as output
//function prototype
int sum(int a,int b){
    int result=a+b;
    return result;}
    



int main(){
    int c=6;//function call
    int d=9;
    printf("the value of c is %d\n",sum (c,d));
    return 0;
}
