/*Napisati program koji pomaže kasirki da obračuna kusur
koji treba da vrati kupcu. Za unetu cenu artikla, količinu artikla i iznos koji je
kupac dao, program treba da ispiše vrednost kusura. Sve ulazne vrednosti su
pozitivni celi brojevi. Napomena: Pretpostaviti da je unos ispravan*/

#include <stdio.h>
int main ()
{
    int c,k,i,p;

    printf("Unesite cijenu, kolicinu i iznos: ");
    scanf("%d%d%d",&c,&k,&i);
        p= i - (c*k);//Ja sam napisao (c*k)-i; i davalo mi je isti iznos ali u minusu, dakle >   |||Poslije sam u rijesenjima pronasao >
                // < ako je c=132, k=2 te i=500, moj rezultat bio bi -236KN a treba biti +236KN |||< rezultat, iako i ovo je tocno. PA JEEE
    printf("Povrat: %d ",p);
    printf("KN");
   
}