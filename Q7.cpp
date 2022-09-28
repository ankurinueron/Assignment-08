#include<stdio.h>   //new triangle combine pattern
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
            {
                if(j==1)
                   printf("*");
            else if(j>=i && j<=6-i || j>=5+i)
            printf("*");
            else
            printf(" ");
            }
            printf("\n");
    }
    return 0;
}

