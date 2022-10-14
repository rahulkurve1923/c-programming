//Read a no to find 10 multiples

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i;

    printf("enter a no:");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    printf("%d*%d=%d\n",n,i,n*i);
   
}