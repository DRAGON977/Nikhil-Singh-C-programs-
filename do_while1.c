#include <stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);

    int i = 0;
     do
    {
        printf("%d\t", i);
        i++;
    } while (i<=n);
    return 0;
    
}
