#include<stdio.h>
int main ()
{
    int i, j, k;                   //1 1//i=1,1<5,dalje,1<=1 tocno,printamo 1,j++ = j = 2, 2<=1 netocno pa idemo dalje,printamo razmak i idemo dalje.
    for ( i = 1; i <= 5; i++)           // k=1,1>=1 tocno, printamo 1,k-- = k = 0, 0>=1 netocno pa idemo dalje, printamo novi red i idemo na pocetak.
                                  // 12 21 
        {                         // 123 321
        for ( j = 1; j <= i; j++) // 1234 4321
        {                         // 54321 54321
        printf("%d", j);
        
        }
    printf(" ");  
          for (k = i; k >= 1; k--)
            {
            printf("%d", k);            
            }
    printf("\n");   
    }
    
}