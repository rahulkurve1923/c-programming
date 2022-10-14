/* A A A A A
   B B B B
   C C C
   D D
   E  
   */

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;

    for (i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%c ",i+64);
        }
        printf("\n");
    }
}