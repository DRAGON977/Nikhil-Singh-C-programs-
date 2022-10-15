#include<stdio.h>
float force(int m){
    float f=9.8*m;
    return f;
}


int main(){
    int mass;
    printf("enter the mass of the body in kilograms:");
    scanf("%d",&mass);
    printf("the force on the body by earth is:%.2f",force(mass));

    
    return 0;
}
