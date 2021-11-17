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
,
/*Zadao sam si cilj da cu raditi ove loopove toliko dugo dok jednog dana kada vidim zadatak u kojem ga treba koristiti, u istom trenutku skuzim
koji loop je poreban i cijelu pozadinu izracunavanja istog loopa, jer previse vremena mi je oduzeo ovaj zadatak koji je budimo realni 
manje od 20 linija koda. Tek tada nastavljam sa ucenjem programiranja, ili sta vec. I DONT KNOW WHAT I AM DOING!!!!!! :)
Rhapsody-Emerald Sword <17.11.2021> - ZENA TRUDNA 10.TJEDAN, PRVO DIJETE, JOS NISAM SVJESTAN, BIT CU ĆAĆA KOBOGDA. DODI SEBI IDI SPAVAJ MAZLUME*/