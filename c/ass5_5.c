/*Read a no to check Armstrong (153 -- 1^3+ 5^3 + 3^3= 153 , sum of cube of all 
digits is equal to a no )*/


#include<stdio.h>
#include<conio.h>

int main()
{
    int n,r,org,arm=0;

    printf("print a number:");
    scanf("%d",&n);
    org=n;

    while (n>0)
    {
        r=n%10;
        arm=arm+(r*r*r);
        n=n/10;

    }
    if (org==arm)
    printf("it is armstrong");
    else
    printf("not armstrong");
}