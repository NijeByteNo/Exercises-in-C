#include<stdio.h>
int main(void)
{
   
    int n, first = 0, second = 1;
    scanf("%d",&n);

    while (first<=n)
    {
       printf("%d ",first);
       int temp = first;
       first=second;
       second=second+temp;
    }
    
    
}

/*Ufff, Ovo sam nasao na internetu jer sam se previse iznervirao i nisam mogao rijesit, evo i sada nakon par prelazaka preko koda
nisam siguran da sam skuzio logiku... 
Prvo se printa first pa onda se mijenja u temp, pa first postaje second pa ima formula ova dolje...
Kako sam shvatio u drugom krugu, first je sada second, sto znaci printa se second i dalje kako idemo krugom sada 
second(njegova trenutna vrijednost) postaje temp,preskace se "first = second", pa onda opet formula 
pa u trecem krugu isto sve, preskace se "first = second". MA NEMAM POJMA...

NAsao sam objasnjenje ovdje https://www.youtube.com/watch?v=5DhDhTO_ALw */
