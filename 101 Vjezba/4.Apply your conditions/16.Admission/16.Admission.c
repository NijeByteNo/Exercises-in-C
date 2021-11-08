#include <stdio.h>
void main ()
{
    int GPA;

    printf("Enter your GPA:");
    scanf("%d", &GPA);
    
    if(GPA>1 && GPA<=5)
    {
        printf("Yes,you can apply for that college\n");
    }
 
    else if(GPA>5 && GPA<1) //Ovo ne znam zasto ne radi, kada ukucam npr -1 ili 6,
    {                       // izbaci mi rezultat iz else-a.
        printf("Error\n");
    }
    else
       { printf("No, you can't apply for that college\n");
       }

}