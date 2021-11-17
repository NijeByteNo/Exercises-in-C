/* Napisati program koji za unijeti polumjer r izracunava opseg i povrsinu kruznice,
 (za znak "PI" koristiti konstantu M_PI iz zaglavlja <math.h>). */
 #include<stdio.h>
 #include<math.h>
 
 int main()
 {

double r, o, p; //polumjer, opseg i povrsina

 printf("Unesite vrijednost polumjera kruznice: ");
 scanf("%lf", &r);

 o = 2 * (r * M_PI);
 p = r * (r * M_PI);

printf("Povrsina kruznice je: %.4lf\nOpseg kruznice je:%.4lf\n", p, o);

 }

