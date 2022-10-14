// Read  a no to print reverse 


#include<stdio.h>
#include<conio.h>

int main()
{
    int n,r;

	printf("Enter a No :");
	scanf("%d",&n);

	
	while(n>0)
	{
        r = n%10;
		printf("%d",r);
		n/=10;
	}
}
