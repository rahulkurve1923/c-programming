
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k;

    for (i=5;i>=1;i--)
    {
        for(k=1;k>=i-1;k--)
           printf("");
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}