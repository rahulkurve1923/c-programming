//generate fibonacci series for N turms

#include<stdio.h>
#include<conio.h>

int main()
{
    int ft=0,st=1,rt,n,i;

    printf("enter no. of terms:");
    scanf("%d",&n);

    for ( i=1; i<=n; i++)
    {
        printf("%d\t",ft);
        rt=ft+st;
        ft=st;
        st=rt;
    }
    
}