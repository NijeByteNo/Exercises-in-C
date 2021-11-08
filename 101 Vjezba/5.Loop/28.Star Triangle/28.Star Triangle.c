#include<stdio.h>
void main ()
{
    char d,c;                 //Obratiti pozornost na unutarnje i vanjske zagrade, u tom je caka
    for(d=0;d<5; d++)
    {  
        for (c=0;c<=d;c++)
        {
        printf("*");
        }
    printf(" %c\n");
    }

}