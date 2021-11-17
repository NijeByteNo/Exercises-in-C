/*Napisati program koji za unetu količinu jabuka u kilogramima i unetu cenu po kilogramu ispisuje ukupnu cenu date količine jabuka. Obe
ulazne vrednosti su pozitivni celi brojevi*/
#include<stdio.h>
int main ()
{
    int kg, kn;
printf("Unesite kolicinu jabuka u KG: ");
scanf("%d", &kg);

printf("Unesite cijenu jabuka u KN:  ");
scanf("%d", &kn);

printf("Ukupna cijena: %d ",kg*kn);
printf("KN");

}