#include<stdio.h>
int main (void)
{
    int array[5];
    int i;
    int sum = 0;
    int sum1 = 0;
    
    printf("Enter value number of array: \n");
    
    for (i = 0; i <= 4; i++)
    scanf("%d", &array[i]);

    for(i = 0; i <= 4; i++)
    {
    if (array[i] % 2==0)
    {
        sum = sum + array[i];
    }
     
    else if (array[i] % 2!=0)
    {
        sum1 = sum1 + array[i];
    }
    }
    printf("Sum of even numbers in aray is %d\n", sum);
    printf("Sum of odd numbers in aray is %d", sum1);
}
//Easy