#include<stdio.h>
int main (void)
{
int a[5];
int i;
printf("Enter elements of array:\n");
for (i = 0; i < 5; i++)
{

	scanf("%d", &a[i]);
}
printf("---------------------------------\n");
for (i = 0; i<=4; i++)
{
printf("Element of array at index %d is %d\n", i ,a[i]);
}
printf("---------------------------------\n");
for (i = 4; i>=0; i--)
{
printf("Element of array at index %d is %d\n", i, a[i]);
}
}
