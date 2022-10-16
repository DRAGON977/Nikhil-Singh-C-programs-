#include <stdio.h>

int main()
{
    int n;
    printf("enter first number:\n");
    scanf("%d", &n);
    int num = n;
    int m = 0;
    while (n != 0)
    {
        int r;
        r = n % 10;
        m = (m * 10) + r;
        n = n / 10;
    }

    int hcf;
    for (int i = 1; i <= n; i++)
    {
        if (num % i == 0 && m % i == 0)
        {
            hcf = i;
        }
    }

    if (hcf == 1)
        printf("the numbers %d and %d  are co-prime\n", num, m);

    else
        printf("the numbers %d and %d are not co-prime.", num, m);
    return 0;
} 
