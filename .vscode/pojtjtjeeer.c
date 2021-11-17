#include<stdio.h>


int funkc(int* je)
{
    printf("je = %d", &je);
    *je=3;
}
int main()

{
    int a;
    a=7;
    int gg = 0;

    int *ptra = &a;

    printf("ptr is = %d\n", ptra);
    printf("adress of a = %d\n", &a);
    printf("a is = %d\n", a);
    printf("*ptra is = %d\n", *ptra);
    
    funkc(&a);
    printf("\nfunkc poslije odje je= %d\n", gg);

    *ptra = 5;
    printf("*ptra is = %d\n", &ptra);
    printf("*ptra is = %d\n", *ptra);
}

