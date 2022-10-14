//Read a no to check prime


#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,cnt=0;

    printf("enter a no:");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        if(n%i==0)
        {
            cnt++;
        }

    }
    if(cnt==2)
    printf("it is prime no. :");
    else
    printf("not prime no. :");
}