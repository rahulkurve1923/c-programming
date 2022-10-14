/*Read a no to find factorial  n!=nx n-1 x n-2 .....1*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,f=1;

    printf("Enter a No :");
	scanf("%d",&n);
    while(n>0)
	{
		f*=n;
		n--;
	}
    printf("the factorial of no:%d\n",f);
}