#include<stdio.h>
void main ()
{
    int num;
    printf("Enter number here:");
    scanf("%d", &num);
    
    if (num%3==0 && num%5==0)
    {
        printf("Number is divisible by 3 and 5");
    }
    else if (num%3==0 && num%5!=0)
    {
        printf("Number is divisible by 3 but not with 5");
    }
    else if (num%3!=0 && num%5==0)
    {
        printf("Number is divisible by 5 but not with 3");
    }
    else if (num%3!=0 && num%5!=0)
    {
        printf("Number is not divisible by 5 and with 3");
    }
    else
    {
        printf("Error");
    }

// ELSE opet ne radi nataknem ga 


}