#include <stdio.h>
void main ()
{
    int scale;

    printf("Enter your math exam grade:");
    scanf("%d", &scale);
    
if (scale>=80 && scale<101)
    {
       printf("Your grade is A+\n");
    }
else if(scale>=70 && scale<=79)
    {
        printf("Your grade is A\n");
    }
else if (scale>=60 && scale<=69)
    {
        printf("Your grade is A-\n");
    }
else if(scale>=50 && scale<=59 )
    {
        printf("Your grade is B\n");
    }
else if(scale>=40 && scale<=49)
    {
        printf("Your grade is C\n");
    }
else if(scale>=33 && scale<=39)
    {
        printf("Your grade is D\n");
    }
else if (scale>=0 && scale<=33 )
    {
        printf("Your grade is F\n");
    }
else
    {
        printf("Error!\n");
    }
}

