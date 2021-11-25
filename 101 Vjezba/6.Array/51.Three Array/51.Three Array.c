#include<stdio.h>
int main(void)
{
    float A[5], B[5], AB[5];
    int i;
    

printf("Enter numbers for A array\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%f",&A[i]);
        
    }
printf("\n\n");
printf("Enter numbers for B array\n");

    for ( i = 0; i < 5; i++)
    {
        scanf("%f",&B[i]);
       
    }
    printf("\n\n");
    printf("\n------------------\n");
    printf("Summation of A and B array is:\n");
    for ( i = 0; i < 5; i++)
    {
        AB[i] = A[i] + B[i];
        printf("%.2f\t", AB[i]);
    }
        
        printf("\n");
       
}

    
