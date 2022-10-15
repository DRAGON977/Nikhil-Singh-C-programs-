#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    //with for loop
   /* for(int i=0; i<=n;i++){
        printf("%d\n",i);
    }
*/
   //with while loop
   int i=0;
   while( i<=n ){
    printf("%d\n",i);
    ++i;
   }
    return 0;
}
