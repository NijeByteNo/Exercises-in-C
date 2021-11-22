#include<stdio.h>
int main ()
{
	int find_next_prime (int nb)
	{
	int prime =2;

	if(nb <= 0)
	{
		return 0;
	}
	while (nb%prime!=0)
	{
		prime++;
		if (nb == prime)
		{
			return prime;
		}
	}
	while (nb%prime == 0)
	{
		nb++;
		while (nb%prime != 0)
		{
			prime++;
			if(nb%prime  == 0 && nb !=prime)
			{
			prime = 2;
			break;
			}
			if(nb%prime == 0 && nb == prime)
			{
				return prime;
			}
		}
	}
find_next_prime(2);
}
}