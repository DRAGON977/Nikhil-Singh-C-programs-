#include <stdio.h>

int main()
{
    int n;
    printf("enter n:");
    scanf("%d", &n);
    int fact = 1;
    int i;
    for ( i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("the factorial of %d is:%d\n", n, fact);

    return 0;
}
