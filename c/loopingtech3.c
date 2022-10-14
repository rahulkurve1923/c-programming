//Read a no to check Armstrong

#include <stdio.h>
#include<conio.h>

int main()
{
    int n,r,i,org,sum=0;

    printf("enter a no.");
    scanf("%d",&n);
    
    org=n;

    while (n>0)
    {
        r=n%10;
        sum+=(r*r*r);
        n/=10;
    }
    if (org==sum)
    printf("it is armstrong");
    else
    printf("not armstrong");
}