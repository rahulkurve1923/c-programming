// Read a no to check palindrom

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,r,original,s=0;

    printf("enter number:");
    scanf("%d",&n);
    original=n;

    while (n>0)
    {
        r=n%10;
        s=r+(s*10); //reversed
        n=n/10;
    }
    
    if (original==s)
    printf("it is pelindrom %d\n",original);
    else
    printf("it is not pelindrom%d\n",original);
}
