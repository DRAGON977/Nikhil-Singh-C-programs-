#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character: \n");
    scanf("%c",&c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))                                                                                                                       
    {

        printf("The given character %c is an aplhabet.\n",c);
    }

    else if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
    {
     printf("%c is a digit",c);
    }
    else {
     printf("%c is a special character.",c);
    }                                                                                                                                                                                                 
    
    return 0;
}                                                                 
