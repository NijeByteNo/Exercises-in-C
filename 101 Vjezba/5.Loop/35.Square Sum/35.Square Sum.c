#include<stdio.h>
int main(void)
{
    int sum=0;
    int i;
        for (i = 5; i <= 25; i++)
    {
        printf("%d",i*i);
        printf(" + "); //dodao sam ovo ali ne znam kako na kraju da nema znaka "+" prije "="
           sum+=(i*i); //dobro sam postavio progam, samo sam se mucio sa formulom, ja sam uporno pisao sum+=i...
    }
     printf("=%d",sum);
}