#include<stdio.h>
void main ()
{
 float a,b,c,d;
 float avg;
 a=83.50;
 b=65.00;
 c=85.75;
 d=67.50;
 avg=(a+b+c+d)/4;
 
 printf("Rahul grade in Math is: %.2lf\n",a);
 printf("Rahul grade in Physics is: %.2lf\n",b);
 printf("Rahul grade in C programing is: %.2lf\n",c);
 printf("Rahul grade in English is: %.2lf\n",d); 
 printf("-------------------------------------\n");
 printf("Rahul average grade is: %.2lf\n",avg);
}