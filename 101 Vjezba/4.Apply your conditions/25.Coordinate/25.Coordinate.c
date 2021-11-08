#include<stdio.h>
void main ()
{
    int x,y;
    
   
    printf("Enter coordinates of your 2D graph:");
    scanf("%d%d", &x, &y);

    if(x<0 && y>0)
    {
        printf("First quadrant");
    }
    else if(x>0 && y>0)
    {
        printf("Second quadrant");
    }
    else if(x<0 && y<0)
    {
        printf("Third quadrant");
    }
    else if(x>0 && y<0)
    {
        printf("Fourth quadrant");
    }
    else 
    {
        printf("Error");
    }
}