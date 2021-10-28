#include<stdio.h>
void main ()
{
    double r=5.5;
    double pi=3.1416;
    double opseg = pi*r*r; //(r*r)/pi; <--- Ovo je bila moja formula, pogresna. JBG

    printf("Opseg kruga je: %.2lf\n",opseg);
}