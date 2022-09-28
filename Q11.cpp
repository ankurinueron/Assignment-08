#include<stdio.h>   //equilateral triangle with alphabets
int main()
{
    int ch=65;
    int i,j;
    for(i=1;i<=5;i++)
    {
        ch=65;
       for(j=1;j<=(5-i);j++)
       {
       printf(" ");
       }
       for(j=1;j<=i;j++)
       printf("%c",ch++);
       ch--;
      for(j=1;j<i;j++)
      {
      printf("%c",--ch);
      }
       printf("\n");
    }
    return 0;
}
