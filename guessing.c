#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    int number,guess,nguesses=0; 
    srand(time(0));
    number=rand()%100+1;//rndom number between 1 and 100.
    //printf("the number is %d",number);
    //keep running the loop until the number is found
    do{
        printf("guess the number btwn 1 to 100:");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower number please\n");
        }
        else if(guess<number){
            printf("higher number please\n");

        }    
        else{
            printf("well done\n you guesses it in %d attempts",nguesses);

        }
        nguesses++;
    } while(guess!=number);

    
    return 0;
}
