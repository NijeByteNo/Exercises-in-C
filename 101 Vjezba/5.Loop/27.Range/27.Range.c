#include<stdio.h>
int main ()
{
int d;
    {
    for(d=100;d<=200;d++)

        {
        if(d%3==0 && d%5==0)
        printf("Broj %d djeljiv je sa 3 i 5.\n", d);
        }
    }
}
//Potrebno obratiti pozornost na viticaste zagrade {}, malo sam se mucio dok nisam jebeni if ubacio na misto