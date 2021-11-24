#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,z,d,i,p,j;
    printf("Enter base: ");
    scanf("%d",&z);
    printf("Enter number: ");
    scanf("%d",&a);
    b=a;
    i=1;
    p=0;

    while(a>0)
	{
		a=a/z;
               p++;
               j=p;
    }
    for(i=1;i<=p;++i)
	{
            j=p;
        while(j>0)
		{
                d=b%z;
                b=b/z;
                --j;
        printf("%d",d);
    	}
    }
  return 0;
 }