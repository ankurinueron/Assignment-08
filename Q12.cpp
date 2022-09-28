#include<stdio.h>   //equilateral triangle with alphabets upside down
int main()
{
    int ch=65;
    int i,j;
    for(i=1;i<=4;i++)
    {
        ch=65;
        for(j=1;j<=i-1;j++){
        printf(" ");
        }
       for(j=1;j<=(5-i);j++)
       {
       printf("%c",ch++);
       }
       ch--;
      while(ch!=65)
       {
            printf("%c",--ch);
        }
       printf("\n");
    }
    return 0;
}
