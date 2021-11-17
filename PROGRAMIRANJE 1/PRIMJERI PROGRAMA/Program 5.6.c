//Program koji ispisuje zbroj prvih prirodnih brojeva
#include<stdio.h>

#define N 100

int main()
{
    int i = 1;
    int s = 1;

    while(s <= N)
    {
        i++;
        s = s+i;
    }
    printf("%d\n", i);
return 0;
}