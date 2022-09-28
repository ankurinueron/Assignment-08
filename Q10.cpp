#include<stdio.h>   //new pattern
int main()
{
    int i,j,count=0;
    for(i=1;i<=4;i++)
    {
        count=0;
        for(j=1;j<=(5-i);j++)
        {
            printf("%d",++count);
        }
        for(j=1;j<=((2*i)-3);j++)
        {
            printf(" ");
        }
        if(i==1)
            count--;
        while(count!=0)
        {
            printf("%d",count--);
        }

        printf("\n");

    }
    return 0;
}
