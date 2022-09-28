#include<stdio.h>   //new pattern
int main()
{
    int i,j;
    int ch=65;
    for(i=1;i<=7;i++)
    {
        ch=65;
        for(j=1;j<=(8-i);j++)
        {
            printf("%c",ch++);
        }
          for(j=1;j<=((2*i)-3);j++){
           printf(" ");
          }
          if(i==1)
            ch--;
        while(ch!=65)
       {
            printf("%c",--ch);
        }
        printf("\n");

    }
    return 0;
}
