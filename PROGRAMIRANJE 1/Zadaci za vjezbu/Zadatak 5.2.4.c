/* Napisati program koji za unijetu brzinu km/h ispisuje odgovarajucu brzinu u m/s. */
#include<stdio.h>
int main()
{
    double km,ms;

    printf("Unesite brzinu u km/h: ");
    scanf("%lf", &km);

    printf("Brzina u m/s je: %lf ", km * 0.277777778); //Preko googla sam nasao da je 1 km/h = 0.277777778 m/s, ostalo je bilo lagano.

}
