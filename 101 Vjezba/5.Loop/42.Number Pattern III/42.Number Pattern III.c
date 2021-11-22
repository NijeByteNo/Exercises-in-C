#include<stdio.h>
int main (void)
{
    int i, j, k;

    for( i = 1; i <= 6; i++)
    {
        for (j = 1; j <= i; j++)               
        {
            if(i<=j)
            {
                printf("%d", i);
            }
        }
            for(k = 2; k <= i; k++)
            {
                printf(" %d", k * i);
            }
    printf("\n");
    }
}