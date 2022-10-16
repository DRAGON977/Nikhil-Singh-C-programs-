#include<stdio.h>


int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int r=0,temp=n;
   // while(n!=0){
    do{
       r = 10*r + n%10;
       n=n/10;
    }
    while(n!=0);
    if(r == temp)
    printf("%d is a palindrome.",temp);
    else
    printf("%d is not a palindrome.",temp);
    return 0;
}
