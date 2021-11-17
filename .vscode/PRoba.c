#include <stdio.h>
int main (void)
{
    int i, j;

    for ( i = 0; i <=5; i++)
{
    for ( j = i; j <= 5; j++)
    {
    printf(" ");
    }
        for ( j = 1; j < i; j++)
        {
        printf("*");
        }
 
            for ( j = 1; j <=i; j++)
            {
            printf("*");
            }
    for ( j = i; j <= 5-1; j++)
    {
    printf("  ");
    }
        for ( j = 1; j < i; j++)
        {
        printf("*");
        }
 
            for ( j = 1; j <=i; j++)
            {
            printf("*");
            }
printf("\n");
}

}