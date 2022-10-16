#include<stdio.h>
void printhw(int count){
    if(count==0){
        return;
    }
    printf("hello nikhil\n");
    printhw(count-1);
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printhw(n);
    return 0;
} 
