#include<stdio.h>
int main (void)
{
    int a[3][3],i,j,sum = 0;

    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("--------------------\n");
     printf("NUMBERS IN ARRAY\n");
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
            
            if(i == j) // Ovo sam na internetu nasao 
            sum += a[i][j];
        }
        printf("\n");
    }
        printf("\n--------------------");
        printf("\nSum of diagonal numbers in array is %d",sum);
}