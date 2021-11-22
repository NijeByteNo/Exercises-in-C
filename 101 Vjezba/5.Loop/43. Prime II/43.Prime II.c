#include<stdio.h>
int main ()
{
	int i,j,n,c=0;
scanf("%d", &n);	
for (i = 1; i <= n; i++)
{
	for(j = 1; j <= i; j++ )
	{
		if ( i%j == 0)
			{ 						
			c++;
			}
	}
	
	if(c==2)
		{		
		printf(" %d\n", i);
		}
	c=0;
}
return 0;

}

// Nasao na internetu rijesenje JBG
