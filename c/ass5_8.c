//Read a no to find digital sum


#include<stdio.h>
#include<conio.h>

int main()
{
    int n,r,sum=0;

    printf("enter a number :");
    scanf("%d",&n);

    while (n>0)
    {
        r =n%10;
        sum+=r;
        n=n/10;
    }

    printf("%d",sum);
    

}