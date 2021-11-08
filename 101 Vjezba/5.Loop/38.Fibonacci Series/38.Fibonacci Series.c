#include<stdio.h>
int main(void)
{
   
    int n, first = 0, second = 1;
    scanf("%d",&n);

    while (first<=n)
    {
       printf("%d",first);
       int temp = first;
       first=second;
       second=second+temp;
    }
    
    
}