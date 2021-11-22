#include<stdio.h>
void main ()
{
    int i=0;
    int j=0;
    j= j++ + ++i;
    
    printf("%d %d\n", i, j);
}
// U zadatku je trebalo naci output vrijednosti i te j, rekao sam i=0 a j=1 a tocan rezultat je i=1 a j=1.JBG