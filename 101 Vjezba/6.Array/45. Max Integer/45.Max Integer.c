#include<stdio.h>
int main (void)
{
    int i,j;
    int a[7] = {-99,45,100,37,89,-327,245};

    if(a[0] > a[1] && a[0] > a[2] && a[0] > a[3] && a[0] > a[4] & a[0] > a[5] && a[0] > a[6])
        {
        printf("Max number in array is %d\n",a[0]);
        }
        
    else if(a[1] > a[0] && a[1] > a[2] && a[1] > a[3] && a[1] > a[4] & a[1] > a[5] && a[1] > a[6])
        {
        printf("Max number in array is %d\n",a[1]);
        }
        
    else if(a[2] > a[0] && a[2] > a[1] && a[2] > a[3] && a[2] > a[4] & a[2] > a[5] && a[2] > a[6])
        {
        printf("Max number in array is %d\n",a[2]);
        }
        
    else if(a[3] > a[1] && a[3] > a[2] && a[3] > a[0] && a[3] > a[4] & a[3] > a[5] && a[3] > a[6])
        {
        printf(" Max number in array is %d\n",a[3]);
        }
        
    else if(a[4] > a[1] && a[4] > a[2] && a[4] > a[3] && a[4] > a[0] & a[4] > a[5] && a[4] > a[6])
        {
        printf("Max number in array is %d\n",a[4]);
        }
        
    else if(a[5] > a[1] && a[5] > a[2] && a[5] > a[3] && a[5] > a[4] & a[5] > a[0] && a[5] > a[6])
        {
        printf("Max number in array is %d\n",a[5]);
        }
        else
    /*if(a[6] > a[1] && a[6] > a[2] && a[6] > a[3] && a[6] > a[4] & a[6] > a[5] && a[6] > a[0])*/
        {
        printf("Max number in array is %d\n",a[6]);
        }
    }
