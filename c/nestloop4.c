/* A B C D E
   A B C D
   A B C
   A B
   A */

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;

    for (i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
    
}