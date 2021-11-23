#include <stdio.h>
int main (void)
{
    int intarray[5]; // UPAMTITI DA BROJ UNUTAR ZAGRADE OZNACAVA KOLIKO IMA VRIJEDNOSTI U ARRAYU, DAKLE TO NIJE INDEX BROJ!!
    int sum = 0;
    int i,a;
   for (i = 0; i < 5; i++)
   {
    printf("Enter integer number:");
    scanf("%d", &intarray[i]);
    
   }
    for(i = 0; i <= 4; i++) // OVDJE OBRATITI PAZNJU, AKO JE i = 0 ONDA U OVOM SLUCAJU MORA BITI i < 5 ILI  i <= 4
    {                       // JER SE OVDJE RADI O INDEX BROJU !!!!!
       if (intarray[i] > 100)
       {
           sum = sum + intarray[i];
           a++; // OVO SAM NASAO NA INTERNETU RIJESENJE
       }
        
    }
    printf ("\n%d\n",sum / i);
}
    

   