#include <stdio.h>
int main() 
 {
    double a, b, product;
    printf("Enter first number: ");
    
    scanf("%lf %lf", &a, &b);

    printf("Enter the second number:");
 
    // Calculating product
    product = a * b;

    // %.2lf displays number up to 2 decimal point
    printf("Product = %.2lf", product);
    
    return 0;
}
