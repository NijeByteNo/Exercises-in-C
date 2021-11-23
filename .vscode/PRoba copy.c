#include<stdio.h>
int main (void)
{
	int i, count = 0;
	int myArray[5];

	for(i = 0; i < 5; i++)
	{
		scanf("%d", &myArray[i]);
		if(myArray[i] > 100) 
		count++;
	}

	printf("\n%d\n",myArray);
}