#include <stdio.h>
void main()
{
int godina;
char slovo;
unsigned long broj_molekula;
double osnovica;

godina = -27;
printf("P. godina - adresa: %p, sirina: %lu\n", &godina, sizeof(godina));

godina= 2020;
printf("P. godina - adresa: %p, sirina: %lu\n", &godina, sizeof(godina));

slovo= '\n';
printf("P. slovo - adresa: %p, sirina: %lu\n", &slovo, sizeof(slovo));

slovo = 'T';
printf("P. slovo - adresa: %p, sirina: %lu\n", &slovo, sizeof(slovo));

broj_molekula = 12;
printf("P. broj_molekula - adresa: %p, sirina: %lu\n", &broj_molekula, sizeof(broj_molekula));

broj_molekula = 323232355;
printf("P. broj_molekula - adresa: %p, sirina: %lu\n", &broj_molekula, sizeof(broj_molekula));

osnovica = 502.54;
printf("P. osnovica - adresa: %p, sirina: %lu\n", &osnovica, sizeof(osnovica));

osnovica = 790.23;
printf("P. osnovica - adresa: %p, sirina: %lu\n", &osnovica, sizeof(osnovica));


}
