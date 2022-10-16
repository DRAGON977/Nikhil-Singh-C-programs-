#include <stdio.h>

int main()
{
    int n, num, remainder, sum = 0;
    printf("enter number:");
    scanf("%d", &n);
    num = n;

    while (num != 0)
    {
        remainder = num % 10;
        sum = (remainder * remainder * remainder) + sum;
        num = num / 10;
    }
    printf("the armstrong for %d is %d\n", n, sum);
    if (sum == n)
    {
        printf("so the number %d is an armstrong number.\n", n);
    }
    else
    {
        printf("so the number %d is not an armstrong number.\n", n);
    }

    return 0;
}
