#include <stdio.h>


void main()
{
    int godina;
    unsigned int razred;
    float cijena;
    double placa;
    char simbol;
    
    printf("Unesite godinu rodenja:");
    scanf("%d", &godina);
   
    printf("Unesite koji je minimalni zavrseni razred:");
    scanf("%u", &razred);
   
    printf("Koja je cijena proizvoda?");
    scanf("%f", &cijena); 


    printf("Koja je placa zaposlenog? ");
    scanf("%lf", &placa);
   
    printf("Unesite jedan specijalni simbol!");
    scanf(" %c", &simbol);

    printf("..............\n");




printf("Godina rodenja je %d.\n", godina);
printf("Potreban je zavrsen %u. razred.\n", razred);
printf("Cijena je: %.2f\n", cijena);
printf("Placa zaposlenog je %.2f EUR\n", placa);
printf("Specijalni simbol je %c\n", simbol); 
}
