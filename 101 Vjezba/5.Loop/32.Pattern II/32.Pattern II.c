#include<stdio.h>
int main (void)
{

    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}