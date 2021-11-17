#include<stdio.h>
int main (void)
{
int i,j,k,l;

for (i = 0; i < 3; i++)
{
    for ( j = 0; j <i; j++)
    {
        printf(" ");
    }
        for (k = 2; k >= i; k--)
          
          {
             printf ("*");
          }
            for (l = 2; l > i; l--)
            {
                printf("*");
            }
printf("\n");
}
for (i = 0; i < 2; i++)
{
    for ( j = 1; j > i; j--)
        {
        printf(" ");
        }
            for ( k = 0; k <= i + 1; k++)
            {
            printf("*");       
            }
                for ( l = 0; l <= i ; l++)
                {
                printf("*");
                }
printf("\n");
}
}

/*GLUP SAM PRAVO! IZNAD JE RIJESENJE,JA SAM NESTO BRLJAO ISPOD*/
/*for (i = 1; i <=5 ; i++)
{
    for ( j = i; j <=5; j++)
    {
        for (k = 1; k <= 5; k++)
          {
          if (k%2!=0)
             {
             printf ("*");
             }
          }
    

    printf("\n");
    }
printf(" ");


}
}
*/