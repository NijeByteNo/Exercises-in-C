#include<stdio.h>
void main ()
{
    int num;
   
    
    for(num=1;num<=100;num++)
    if(num%2==0)    //Prvo se koristi naredba for,zatim if. Ja sam koristio samo for i formulu od if na istom mjestu
    {
        printf("Even number:%d\n",num);
    }
}

