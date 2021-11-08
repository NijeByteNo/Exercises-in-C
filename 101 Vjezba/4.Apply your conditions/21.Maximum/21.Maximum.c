#include<stdio.h>
void main ()
{
    int a, b, c;

    printf("Enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);

    if(a>b& a>c)
    {
        printf("Number %d is biggest.", a);
    }
    else if(b>a& b>c)
        {
        printf("Number %d is biggest.", b);
        }
    else if(c>a& c>b)
    {
    printf("Number %d is biggest.", c);
    }
    else
            
    printf("Error");
//Sada sam pokusao da else ne stavim izmedu viticastih zagrada {} ali opet ne radi. :( :(
}