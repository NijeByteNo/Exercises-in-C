#include<stdio.h>
int main (void)
{
    int i,j;
    int a[7] = {-99,45,100,37,89,-327,245};

    for (i = 0; i <7; i++)
    {
        for(j=0;j<=6;j++)
        if(a[i]<a[j] && a[i]>0)
        {
        printf("%d\n",a[i]);
        }
       
       /* else if(a[1]>a[i])
        {
        printf("2-%d\n",a[1]);
        a[i++];

        }
        else if(a[2]>a[i])
        {
        printf("3-%d\n",a[2]);
        a[i++];
        }
        else if(a[3]>a[i])
        {
        printf("4-%d\n",a[3]);
        a[i++];

        }
        else if(a[4]>a[i])
        {
        printf("5-%d\n",a[4]);
        a[i++];

        }
        else if(a[5]>a[i])
        {
        printf("6-%d\n",a[5]);
        a[i++];

        }
        else
        {
        printf("7-%d\n",a[6]);
        a[i++];
        }*/

        
    }
}