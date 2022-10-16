#include <stdio.h>
#include <math.h>

int main()
{
    // type declaration instructions
    // integer type
    /*
    int a = 2;        // interger type
    int b = 4, c = 9; // sath me declaraion
    printf("the multipication of %d,%d,%d\nis:%d", a, b, c, (a * b * c));
    */
    // float type
    
    float a;
    printf("enter a:");
    scanf("%f",&a);
    float b;
    printf("enter b:");
    scanf("%f",&b);
    printf("the addition of %f and %f is:\n%f",a,b,(a+b));
    printf("\nthe difference of %f and %f is:\n%f",a,b,(a-b));
    printf("\nthe product of %f and %f is:\n%f",a,b,(a*b));
    printf("\nthe division of %f and %f is:\n%f",a,b,(a/b));
    //printf("\nthe remainder of %d and %d is:\n%d",(int)a,(int)b,(int)a%b);
    //will not be executed because int has 4byte space in memory and float has 8 byte and we can not typecast bigger datatype in a samaller data type.
    
    printf("\nthe value of 4^2 is %f\n",pow(4,2));//%f isi leie q ki ye double retrn krta h
    

    return 0;
}
