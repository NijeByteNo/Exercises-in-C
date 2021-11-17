/*Zadatak 1.1.2 Napisati program koji za uneti ceo broj ispisuje njegov
kvadrat i njegov kub.*/
#include <stdio.h>
int main() 
{
int a;


printf("Unesite cijeli broj: ");
scanf("%d", &a);

printf("Kvadrat broja %d je:  %d\n",a,a*a);
printf("Kub broja %d je:  %d",a,a*a*a);
}