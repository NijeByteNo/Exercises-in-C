#include<stdio.h>
int main (void)
{
int a[2][3],b[2][3], i, j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
printf("\n------' a = '-----\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
printf("\n----' TRANSPOSED a = '----\n");
        
        for(i=0;i<3;i++)
        {
            for(j=0;j<2;j++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
        }

        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
        {
            b[i][j] = a[i][j];
        }
        }
printf("\n----' TRANSPOSED b = '----\n");
         
         for(i=0;i<3;i++)
        {
            for(j=0;j<2;j++)
        {
            printf("%d",b[j][i]);
        }
        printf("\n");
        }
}

