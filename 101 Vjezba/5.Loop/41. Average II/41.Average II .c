#include <stdio.h>
int main (void)
{
int i,sum;
//int count = 0;
sum = 0;

for (i = 50; i<=500; i++)
if (i % 3 == 0 & i % 5 == 0 && i % 12 == 0)
{
    
    
             sum+=i;
             printf("Number divisible by 3, 5 or 12 is: %d\n",i);
             //count ++;


    

    
}
printf("Summation = %d\n",sum);
printf("Average = %d\n", sum/8);
//printf("Average = %d", sum/count;  

//Ja sam isprintao brojeve koji s djeljivi sa 3, 5 i 12 pa  sam ih rucno prebrojao i tako nasao prosjek
// Inace se napravi nova varijabla i dodijeli joj se vrijednost 0 (int count = 0;),
//Zatim se doda inkrementacija (count++;) unutar if funkcije.
//Dobro je, ajde 
}