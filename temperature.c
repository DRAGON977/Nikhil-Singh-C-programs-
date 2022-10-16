#include<stdio.h>
//(celsius*9/5)+32
float convert(float c){
    float f=(c)*9/5+32;
    return f;

}
int main(){
    float c;
    printf("enter the temperature in celsius:");
    scanf("%f",&c);
    printf("the tempratre in farenheit is:%f",convert (c));
    
    return 0;
}
