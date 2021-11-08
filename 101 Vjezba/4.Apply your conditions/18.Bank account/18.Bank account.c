#include<stdio.h>
void main ()
{
    int age;

    printf("Enter your age:");
    scanf("%d", &age);
    if (age<18)
    {
        printf("You can't open bank account!");
    }
    else if(age>=18)
    {
        printf("You can open your bank account!");
    }
    else if (age<0)
    {
        printf("Error");
    }
    else
    {
        printf("Error");
    }
}
//Nece da mi radi ELSE IF (ERROR) i ELSE!
//Ne znam zasto!