//Program koji ispituje da li je unijeti broj paran
#include<stdio.h>   
int main()
{
    int a;

    printf("Unesite broj: ");
    scanf("%d", &a);
    
    if(a % 2 ==0)
        printf("Broj %d je paran\n", a);
    else
        printf("Broj %d je neparan\n", a);
return 0;
}