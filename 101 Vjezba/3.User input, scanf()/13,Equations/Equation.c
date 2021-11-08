#include<stdio.h>

void main()
{

    int a, b, x, y;
    
    
    
    printf("Jednadzba: (a*b) + (x*y)\n");
    
    printf("Unesite a znamenku:\n");
    scanf (" %d", &a);
    printf("Unesite b znamenku:\n");
    scanf ("%d", &b);
    printf("Unesite x znamenku:\n");
    scanf ("%d", &x);
    printf("Unesite y znamenku:\n");
    scanf ("%d", &y);
    
    printf("------------------------\n");
    {
    int rez = (a*b) + (x*y);
    printf("Rezultat je: (%d * %d) + (%d * %d) = %d\n", a, b, x, y, rez);
    }
    }