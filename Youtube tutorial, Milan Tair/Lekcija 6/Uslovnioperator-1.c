#include<stdio.h>
void main()
{
    unsigned char simbol;

    printf("Unesite broj od 0 do 9\n");
    scanf("%c",&simbol);
   
    printf("Ovo %s broj 0 do 9\n",simbol >= '0' && simbol <='9' ? "jeste" : "nije");

    }