#include <stdio.h>
int main(void)
{
int i,j;
printf("---------<Right Triangle>-------\n");

for ( i = 1; i <=5; i++)
{
    for ( j = 1; j <= i; j++)
    {
    printf("*");
    }
printf("\n");
}

printf("------<D. Right Triangle>--------\n");

for ( i = 1; i <=5; i++)
{
    for ( j = i; j <= 5; j++)
    {
    printf("*");
    }
printf("\n");
}

printf("--------<Left Triangle>---------\n");

for ( i = 1; i <=5; i++)
{
    for ( j = i; j <= 5; j++)
    {
    printf(" ");
    }
    for ( j = 1; j <= i; j++)
    {
    printf("*");
    }
printf("\n");
}

printf("-------<D. Left Triangle>-------\n");

for ( i = 1; i <=5; i++)
{
    for ( j = 1; j <= i; j++)
    {
    printf(" ");
    }
    for ( j = i; j <=5; j++)
    {
    printf("*");
    }
printf("\n");
}

printf("-----------<Pyramid>-----------\n");

for ( i = 1; i <=5; i++)
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
printf("\n");
}

printf("-----------<Diamond>----------\n");

for ( i = 1; i <5; i++)
{
    for ( j = i; j <= 5; j++)
        {
        printf(" ");
        }
            for ( j = 1; j <= i-1; j++)
            {
            printf("*");
            }
 
                for ( j = 1; j <= i; j++)
                {
                printf("*");
                }
printf("\n");
}

for ( i = 1; i <=5; i++)
{
    for ( j = 1; j <= i; j++)
        {
        printf(" ");
        }
            for ( j = i; j <= 5; j++)
            {
            printf("*");
            }
                for ( j = i; j <= 5-1; j++)
                    {
                    printf("*");
                    }
printf("\n");
}

printf("-----------<Sandglass>----------\n");

for ( i = 1; i <5; i++)
{
    
    for ( j = 1; j <= i; j++)
        {
        printf(" ");
        }
            for ( j = i; j <= 5; j++)
                    {
                    printf("*");
                    }
                for ( j = i; j <5; j++)
            {
            printf("*");
            }

printf("\n");

}
for ( i = 1; i <=5; i++)
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
printf("\n");

}

printf("--------<Reverse Pyramid>--------\n");

for ( i = 1; i <=5; i++)
{
    for ( j = 1; j <=i ; j++)
        {
        printf(" ");
        }
            for ( j = i; j <= 5-1; j++)
            {
            printf("*");
            }
 
                for ( j = i; j <=5; j++)
                {
                printf("*");
                }
printf("\n");
}

printf("-----<L. Pascal Triangle>---------\n");

for ( i = 1; i <5; i++)
{
    for ( j = 1; j <= i; j++)
    {
    printf("*");
    }
printf("\n");
}
for ( i = 1; i <=5; i++)
{
    for ( j = i; j <= 5; j++)
    {
    printf("*");
    }
printf("\n");
}

printf("-----<R. Pascal Triangle>---------\n");

for ( i = 1; i <5; i++)
{
    for ( j = i; j <= 5; j++)
    {
    printf(" ");
    }


    for ( j = 1; j <= i; j++)
    {
    printf("*");
    }
printf("\n");
}

for ( i = 1; i <=5; i++)
{
    for ( j = 1; j <= i; j++)
    {
    printf(" ");
    }
    for ( j = i; j <=5; j++)
    {
    printf("*");
    }
printf("\n");
}

printf("-----------<Butterfly>------------\n");

    for (i = 1; i <= 3; i++)
{
    for ( j = 1; j <= i; j++)
    {
    printf("*");
    }
    for ( j = i; j <= 3; j++)
    {
    printf("  ");
    }
    for ( j = 1; j <= i; j++)
    {
    printf("*");
    }
printf("\n");
}

for ( i = 0; i <= 3; i++)
{
    for ( j = i; j <= 3; j++)
    {
    printf("*");
    }
   for ( j = 1; j <= i; j++)
    {
    printf("  ");
    }
    for ( j = i; j <= 3; j++)
    {
    printf("*");
    }
printf("\n");
}

printf("---------<Double Pyramide>--------\n");

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



    
 

/*https://www.youtube.com/watch?v=xzstcj3Cuso*/