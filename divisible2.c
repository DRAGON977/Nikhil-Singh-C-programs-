#include <stdio.h>

int main()
{
    int n;
    printf("enter n:");
    scanf("%d", &n);
    for (int i = 1; i<= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("the number is %d divisible by 3 and 5.\n",i );
        }
        else
        {
            printf("the number is %d not disible by 3 and 5.\n",i );
        }
    }
    return 0;
}
