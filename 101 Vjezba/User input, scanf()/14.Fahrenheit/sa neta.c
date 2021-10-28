#include<stdio.h>
void main ()
{
  
    int b
    printf("Enter number:");
    scanf("%d", &b);

    if (b%11==0 && b%5==0)
    {
    printf("number %d is dividible with 5 or 11",b)    
    }
    else
    {printf("Number %d is not dividible with 5 or 11", b);}
}
