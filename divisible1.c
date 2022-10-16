#include <stdio.h>

int main()
{
    int x;

    printf("Enter number:");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("the number is divisble by 2 only.\n");
    }
    if (x % 3 == 0)
    {
        printf("the number is divisible by 3 only.\n");
    }
    if (x % 2 == 0 && x % 3 == 0)
    {
        printf("\nthe given number is divisible by 2 and 3.\n");
    }
    else
    {
        printf("\nthe number is not divible by 2 and 3.");
    }
    return 0;
}
