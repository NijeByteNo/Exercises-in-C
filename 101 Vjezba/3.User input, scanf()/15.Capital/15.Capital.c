#include<stdio.h>
void main ()
{
    char small;
    char capital;

    printf("Enter small letter of alphabet:");
    scanf(" %c", &small);

    capital= (small - 32);
    printf("Capital version is: %c", capital);

    
    
}