#include<stdio.h>
void main ()
{
    int num;
    printf("Enter number here:");
    scanf("%d", &num);

    if (num%2==0)
    {
        printf("Number %d is even\n", num);
    }
    else if(num%2==1)
    {
        printf("Number %d is odd\n", num);
    }
    else
    {
        printf("ERROR", num);
    }
}
// Kada ukucam znak ili slovo za rezulat nece da prikaze error nego kaze "Number 0 is even". ???