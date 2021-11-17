//Program koji ispisuje tablicu kvadrata i korijena
#include<stdio.h>
#include<math.h>

#define N 100

int main()
{
    int i;

    for(i = 1; i <= N; i++)
    printf("%3d %5d %7.4f\n", i, i*i, sqrt(i));
    
return 0;
}