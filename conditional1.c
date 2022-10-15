#include<stdio.h>
int main ()
{
    int marks;    
    printf("enter marks(0-100):");
    scanf("%d",&marks);
    if(marks>=30 && marks<70){
        printf("pass\n");
    }
    else if(marks>=70 && marks<90)
        printf("outstanding\n");
    
     else if(marks>=90 && marks<100){
        printf("super outstanding\n");
     }
        
    else{

        printf("fail\n");
    }
    
return 0;
}
