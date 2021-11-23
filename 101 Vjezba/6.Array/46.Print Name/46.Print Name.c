#include<stdio.h>
int main (void)
{
    char name[43];
    
    scanf("%s", name); // Zajebavao sam se oko ovoga, nisam znao da ne treba ici znak "&" kada se uzima input za array
    printf("Hello Mr. %s", name);
}