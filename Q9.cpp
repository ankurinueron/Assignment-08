#include<stdio.h>   //star pattern equilateral triangle with numbers upside down
int main()
{
    int i,j,k,count=0;
    for(i=1;i<=4;i++)
    {
        count=0;
        for(j=1;j<=(i-1);j++)
        {
            printf(" ");
        }
        for(j=1;j<=(5-i);j++)
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
