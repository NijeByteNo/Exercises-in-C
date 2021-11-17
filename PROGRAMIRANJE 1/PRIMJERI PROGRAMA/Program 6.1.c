//Na 32/bit sistemu sljedeci program ispisuje negativan rezultat zbog prekoracenja memorije
#include<stdio.h>
int main ()
{
    int a = 2000000000, b = 2000000000;
    printf("Zbroj brojeva %d i %d je: %d\n", a, b, a+b);
    return 0;
}