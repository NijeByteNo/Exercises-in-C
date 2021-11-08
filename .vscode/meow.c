#include<stdio.h>


void meow(int n); //<<< funkcija meow koju sam napravio, int n
int main(void)

{
   meow(3); //<<<< puno ljepse izgleda kod nega da trebam
   
}

void meow(int n)
 {  for (int i = 0; i < n; i++)

    {
    printf("meow\n");
    }
 }