#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i=1;

    printf("enter a no:");
    scanf("%d",&n);

    while (n>0)
    {
        if(n%2==0)
            break;
            i++;
    

    }
    if(i==2)
    printf("it is prime no. :");
    else
    printf("not prime no. :");
}