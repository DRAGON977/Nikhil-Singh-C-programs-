#include <stdio.h>
#include<math.h>

int main()
{
    float(a);
    float(b);
    float(c);
    printf("enter a:\n");
    scanf("%f", &a);
    printf("enter b:\n");
    scanf("%f", &b);
    printf("enter c:\n");
    scanf("%f", &c);
    float(d) = sqrt ((b * b) - 4.0 * (a * c));
    if (d >= 0)
    {
        printf("discriminant is positive\n");
        printf("First root of equation %f x^2 + %f x + %f is :   %f\n", a, b, c, ((-b + d) / 2.0 * a));
        printf("second root of equation %f x^2 + %f x + %f is :   %f\n", a, b, c, ((-b - d) / 2.0 * a));
    }
    else
    {
        printf("discriminant is negative\n");
        printf("Roots are not availabe");
    }

    return 0;
}
