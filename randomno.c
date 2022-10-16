#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    int number;
    srand(time(0));
    number=rand()%100+1;//rndom number between 1 and 100.
    printf("the numer is %d",number);
}
