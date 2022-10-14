
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k;

    for (i=10;i>=1;i--)
    {
        for(k=1;k<=i;k++)
           printf(" ");
        for(j=10;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}