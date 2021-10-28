#include <stdio.h>

#define AUTOR "Stjepan Vasilj"

void main(){
    int godina = 2021;
    unsigned int razred = 4;
    float cijena = 1654.9;
    double placa = 987.252352;
    char simbol = 'M';
    const double STOPA_POREZA = 0.2;

printf("OVaj video je sniman %d. godine.\n", godina);
printf("Potreban je zavrsen %u. razred.\n", razred);
printf("Cijena je: %.4f\n", cijena);
printf("Placa zaposlenog je %.2f EUR\n", placa);
printf("Specijalni simbol je %c\n", simbol); 
printf("Porez na cijenu je %.2f\n", cijena * STOPA_POREZA);
printf("Porez je %.2f%%\n", STOPA_POREZA * 100);
printf("Ime autora je \"%s\".\n", AUTOR);
}
