/*Napisati program koji pomaže kasirki da izračuna ukupan
račun ako su poznate cene dva kupljena artikla. Cene artikala su pozitivni celi
brojevi. Napomena: Pretpostaviti da je unos ispravan.*/
#include<stdio.h>
int main ()
{
    int a,b;

  {
   printf("Unesite cijenu prvog artikla: ");
    scanf("%d",&a);
   printf("Unesite cijenu drugog artikla: ");
    scanf("%d",&b);
  }

printf("Ukupna cijena: %d",a+b);
}