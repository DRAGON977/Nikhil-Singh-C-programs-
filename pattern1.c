#include <stdio.h>

void printpattern(int n)
    {
    if (n == 1)
    {
        printf("*\n");
        return 0;
    }
    printpattern(n - 1);
    for (int i = 0; i < 2 * n - 1; i++)
    {
        printf("*");
    }
    printf("\n");
}
 // function prototype
int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    printpattern(n); // function calling
    return 0;
}
// 1=1
// 2=3
// 3=5
// n=2n-1
