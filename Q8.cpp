#include<stdio.h>   //star pattern equilateral triangle with numbers
int main()
{
    int i,j,k;
    int count=0;
    for(i=1;i<=4;i++)
    {
        count=0;
        for(j=1;j<=(4-i);j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",++count);
        }
        while(count!=1)
        {
            printf("%d",--count);
        }
        printf("\n");

    }
    return 0;
}
