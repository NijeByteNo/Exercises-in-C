// Program koji izracunava rastojanje između točaka
#include<stdio.h>
#include<math.h>
int main ()
{
double x1, y1, x2, y2;

printf("Unesite koordinate prve tocke: ");
scanf("%lf %lf", &x1, &y1);
printf("Unesite koordinate druge tocke ");
scanf("%lf %lf", &x2, &y2);

printf("Rastojanje izmedu tocaka je: %lf\n", sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
   
return 0;
}