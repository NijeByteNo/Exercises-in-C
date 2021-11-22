#include<stdio.h>
int main (void)
{
    int n[10];
    int sum = 0;
    int i;
    printf("Enter numbers:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &n[i]);
    for (i = 0; i < 10; i++)
    {
        sum += n[i];
    }
    printf("Sum of n array is: %d", sum);
    
}