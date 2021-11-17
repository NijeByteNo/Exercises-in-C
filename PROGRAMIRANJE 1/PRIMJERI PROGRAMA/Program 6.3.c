//Primjena slozenog operatora dodjele (Obratiti paznju na rezultat operacija koji zavisi od tipa operanda)
#include <stdio.h>
int main() 
{
unsigned char c = 254;
c += 1; printf("c = %d\n", c);
c += 1; printf("c = %d\n", c);
return 0;
}
/*
REZULTAT:
   c = 255
   c = 0 
*/