#include<stdio.h>
void main ()
{
    int rank;
    printf("Enter your rank in company:");
    scanf("%d", &rank);

    if (rank == 1)
    {
        printf("Your salary: 2,50,000 BDT");
    }
    else if (rank == 2)
    {
        printf("Your salary: 2,10,000 BDT");
    }
    else if (rank == 3)
    {
        printf("Your salary: 1,50,000 BDT");
    }
    else if (rank == 4)
    {
        printf("Your salary: 80,000 BDT");
    }
    else if (rank >= 5)
    {
        printf("Your salary: 50,000 BDT");
    }
    else
    {
        printf("ERROR!");
    }
}
//ELSE OPET RADI!! Nije mi jasno zasto nije radio na proslim zadacima!!! "????"