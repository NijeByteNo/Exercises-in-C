// Napisati program koji ispisuje maksimum tri unijeta broja
#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Unesite tri broja: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c)
    {
        printf("%d je maksimum", a);
    }
    else if (b>a && b>c)
    {
        printf("%d je maksimum", b);    
    }
    else  if (c>a && c>b)
    {
        printf("%d je maksimum", c);
    }
      
       
    
}