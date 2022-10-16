//intialization of array
#include<stdio.h>

int main(){
  int a[5];int i;
  printf("enter the elements of array:\n");
   for( i=0;i<5;i++){
    scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++){
   printf("array element at index is %d,\t%d\n",i,a[i]);
   }
   for(i=4;i>=0;i--){
    printf("\nreverse array element at index is %d,\t%d\n",i,a[i]);
   }
   
    return 0;

}
