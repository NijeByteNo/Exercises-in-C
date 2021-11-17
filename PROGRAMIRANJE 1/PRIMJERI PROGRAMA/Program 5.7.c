//Program koji prevodi mala u velika slova
#include<stdio.h>
#include<ctype.h>

int main()
{
    int c;

    printf("Upisite recenicu ( Zavrsite je znakom "" . ""): ");
    do
    {
        c = getchar();
        putchar(toupper(c));
    } 

    while (c != '.');
    putchar('\n');

return 0;
}