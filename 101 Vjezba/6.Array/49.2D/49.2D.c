#include<stdio.h>
int main(void)
{
    int array[3][3];
    int i,j,sum = 0, count = 0;

    for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d", &array[i][j]);
       
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        sum = array[i][j] + sum;
        count++;
       
    }
 
     
}
    printf("%d",sum / count);
}