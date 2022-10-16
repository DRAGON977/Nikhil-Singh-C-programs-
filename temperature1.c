#include<stdio.h>
int main(){
    float celsius;
    printf("enter the value of temprature in celcius:");
    scanf("%f",&celsius);
    float fahrenheit;
    printf("the value of temprature in fahrenheit is: %f F \n ",(celsius * 9/5)+32);
    float kelvin;
    printf("the value of temprature in kelvin is: %f K \n",(celsius+273.15));
    return 0;
}
