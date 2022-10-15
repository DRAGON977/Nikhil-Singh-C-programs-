#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int sum=0;
    int i=0;
    for( i=1; i<=n; i++){

        sum=sum+i;
        }
        printf("the sum is:%d\n",sum);


    //while loop    
    while(i<=n){
      sum=sum+i;
      i=i++;
    }    
    printf("the sum is:%d\n",sum);



   //do while loop
   do{
    printf("the sum is:%d\n",sum);
   }
    while(i<=n);
    i=i++;
  
  return 0;
}

