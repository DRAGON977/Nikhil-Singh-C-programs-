// storing sum of arrays in third array
#include <stdio.h>

int main()
{
    int n;
    int i;
    printf("enter the size of array");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of ist array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    /*for (i = 0; i < n; i++)
    {
        printf("array element at index is %d,\t%d\n", i, a[i]);
    }*/
    int b[n];
    printf("enter the elements of 2nd array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    /* for (i = 0; i < n; i++)
     {
         printf("array element at index is %d,\t%d\n", i, b[i]);
     }*/
    int sum[n];
    for (i = 0; i < n; i++)
    {
        sum[i] = a[i] + b[i]; // storingg sum of index values.
        printf("sum array element at index %d is =%d\n", i, sum[i]);
    }

    return 0;
}
