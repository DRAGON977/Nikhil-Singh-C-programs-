#include <stdio.h>

int main()
{
    int sum = 0;
    float avg;
    int n;
    printf("enter size of the array:");
    scanf("%d", &n);
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the array element at %d index is:%d\n", i, marks[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }
    printf("sum of array is: %d", sum);
    avg = (float)(sum / n);
    printf("\naverage of array is:%f", avg);
    return 0;
}
