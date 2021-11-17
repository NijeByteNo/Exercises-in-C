/*Napisati program koji za uneta dva cela broja x i y ispisuje
njihov zbir, razliku, proizvod, ceo deo pri deljenju prvog broja drugim brojem i
ostatak pri deljenju prvog broja drugim brojem. Napomena: Pretpostaviti da je
unos ispravan.*/
#include<stdio.h>
int main ()
{
    int x,y;
   printf("Unesite x: ");
   scanf("%d",&x);
   printf("Unesite y: ");
   scanf("%d",&y);

printf("%d + %d = %d\n",x,y,x+y);
printf("%d - %d = %d\n",x,y,x-y);
printf("%d * %d = %d\n",x,y,x*y);
printf("%d / %d = %d\n",x,y,x/y);
printf("%d %% %d = %d",x,y,x%y);
}
