#include<stdio.h>
// a program to demonstrate pointers.
int main(){
    int i=8;
    int *j;
    j=&i;// j stores address of i
    printf("Add i=%u\n",&i);//will give address of i.
    printf("Add i=%u\n",j);//j has address of i.so it will also give adressof i.
    printf("add j=%u\n",&j);//will give address of j.
    printf("value j=%d\n",*(&j));//will address of i.
    printf("value i=%d\n",i);
    printf("value i =%d\n",*(&i));
    printf("value i =%d\n",*j);//it will print value of  i.


    return 0;
}
