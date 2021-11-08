#include<stdio.h>
int main(void)
{
    int N;
    {
        scanf("%d",&N);
        for (int i = N; i >= -32; i--)
        {   if(N<0)
            {
            printf("Stoped");  //ovdje treba ici return 0; bez "{}", ja sam shvatio da treba ovako rijesit i sada mi ulazi u loop JBG
            }
        
                printf("%d ",i);
        }
     }
}
