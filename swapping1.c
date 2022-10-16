#include <stdio.h>
// call by reference
void wrong_swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *b = temp;
}
int main()
{
    int x = 3, y = 4;
    printf("the value of x and y before swap is %d and %d\n", x, y);
    wrong_swap(x, y);
    printf("the value of x and y after swap is %d and %d\n", x, y);

    printf("\n \n \nthe value of x and y before swap is %d and %d.\n", x, y);

    swap(&x, &y);
    printf("the value of x and y after  swap is %d and %d.\n", x, y);
    return 0;
}
