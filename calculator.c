#include <stdio.h>
int main(){
    char op;//'+','-','*','/','%'
    printf("enter an arithmatic operator:\n");
    scanf("%c",&op);
    int a;
    printf("enter the first number:\n");
    scanf("%d",&a);
    int b;
    printf("enter the second number:\n");
    scanf("%d",&b);
    switch(op){
        case '+': printf( "sum of %d and %d is: %d ",a,b,a+b);
                  break;
        case '-': printf( "diff of %d and %d is: %d ",a,b,a-b );
                  break; 
        case '*': printf( "product of %d and %d is: %d ",a,b,a*b );
                  break;  
        case '/': printf( "division of %f and %f is: %f",(float) a,(float) b,(float)a/b );
                  break;                           
        case '%': printf( "remainder of %d divided by %d is: %d ",a,b,a%b );
                  break;
        default: printf("enter an arithmatic opertion\n thank you");          
    }          
}
