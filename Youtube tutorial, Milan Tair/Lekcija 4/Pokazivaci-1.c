#include <stdio.h>

void main()
{  
                     // 0           1        2   <----INDEX BROJ
    double place[3];//[504.12] [490.97] [783.09]
    double *p;

    p = &place[0];
    printf("Trenutna adresa pokazivaca je %p.\n", p); /*p vec u sebi sadrzi adresu, koju smo gore zadali)*/
    *p = 504.12;


p++; /*p = p+1 to znaci da ako je pokazivao na adresu 00000001 od sada ce pokazivati na 00000009, 
                 zato sto je 8 bajtova pomjereno*/
                 /* nakon ove operacije pokazivac pokazuje na drugi "boks" u nizu, tj na drugu plaću"*/
 printf("Treutna adresa pokaivaca je %p.\n", p);
*p = 490.97;

p++; //sada je pokazivac a trecem boksu
printf("Treutna adresa pokaivaca je %p.\n", p);
*p= 783.09;
/*kada smo dodijelili sve tri place, pokazivac i dalje upucuje na treci blok, 
  ali nema potrebe da ga pomjeramo. kada bi stavili p++, on ne bi isao na 4blok 
  jer on ne postoji u nasem programu iako postoji u stvarnosti, ali program nece 
  dopustit da se uzima memorija iz drugog programa (pojekta)*/
printf("Tri place su: %.2f, %.2f, %.2f\n",
       place[0], place[1], place[2]);
}
/*  
OUTPUT CE IZGLEDATI OVAKO
Trenutna adresa pokazivaca je 000000000061FE00.   <<| Ovo je pocetna adresa koju smo zadali 
Treutna adresa pokaivaca je 000000000061FE08.     <<| Pomjerena za 8 mjesta sa komandom p++
Treutna adresa pokaivaca je 000000000061FE10.     <<| Pomjereno ponovno za 8 mjesta. 
                                                      NA KRAJU 10 je heksadeksalni broj a vrijednost mu je 16
Tri place su: 504.12, 490.97, 783.09              <<| Vrijednost placa koje se nalaze unutar blokova [][][]*/ 