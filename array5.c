#include<stdio.h>

int main(){
    int even= 0;int odd=0;
    int n;
    printf("enter size of the array:");
    scanf("%d", &n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++){
        if(num[i]%2==0)
        even++;
        else 
        odd++;
     }
     printf("no. of even elements in array is : %d",even);
     printf("\nno. of odd  elements in array is : %d",odd);

     return 0;
}
