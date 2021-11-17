//Sada program daje ispravan rezultat zbog tipa unsigned int i koristenja formata %u
#include<stdio.h>
int main ()
{
    unsigned int a = 2000000000, b = 2000000000;
    printf("Zbroj brojeva %u i %u je: %u\n", a, b, a+b);
    return 0;
}