#include<stdio.h>
int main(void)
{
    int ocjene[5];
    int sum = 0;
    int avg, i;
    for ( i = 0; i < 5; i++)
    scanf("%d", &ocjene[i]);
    for ( i = 0; i < 5; i++)
    {
    sum = sum + ocjene[i];
    }
    printf("Sum is: %d",sum);
    avg = sum / 5;
    printf("\nAverage is: %d",avg);

}