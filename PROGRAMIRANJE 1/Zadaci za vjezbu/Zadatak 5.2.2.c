/* Napisati program koji za unijete koordinate tocke trokuta izracunava njegov opseg i povrsinu.*/
#include<stdio.h>
#include<math.h>

int main ()
{

double x1,y1,x2,y2,x3,y3; //tocke trokuta na kooridantnom sustavu
double ab, bc, ac;
double s, P; 

printf ("Unesite kooridinate za tocku a: ");
scanf("%lf %lf", &x1, &y1);

printf ("Unesite kooridinate za tocku b: ");
scanf("%lf %lf", &x2, &y2);

printf ("Unesite kooridinate za tocku c: ");
scanf("%lf %lf", &x3, &y3);

 
/*printf(" P je %lf", sqrt(0.5 * (x1 * (y2 - y3) + x2 * (y3-y1) + x3 * (y1 - y2))));




int ab = (x1+y1)*(x1+y1) + (x2-y2)*(x2-y2);
int bc = (x2+x3)*(x2+x3) + (y2-y3)*(y2-y3);
int ac = (x1+x3)*(x1+x3) + (y1-y3)*(y1-y3);

printf("ab = %.2lf,bc = %.2lf, ac = %.2lf", ab, bc, ac);*/

ab = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
bc = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
ac = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));

s = (ab + bc + ac) / 2;
P = sqrt(s*(s-ab)*(s-bc)*(s-ac));

printf("Povrsina trokuta je: %lf\n", P);
printf("Opseg trokuta je: %lf\n", s);
/*printf("ab = %.2lf,bc = %.2lf, ac = %.2lf", ab, bc, ac);*/


}

// GLEDAO RIJESENJA ..... Iznad sam pokusao rijesiti trazeci formulu na internetu ali bezuspjesno..