/*print all even nos in the range 0- 100 and print summation
	2
	4
	--
	2550 */

	#include<stdio.h>
	#include<conio.h>

	int even(int);

	int main()
	{
		int n;
	 printf("\n Please Enter the Maximum Limit Value : ");
     scanf("%d", &n);
  
  
		even(n);
	}
	int even( int n)
	{
		int i,sum=1;
		for (i=1;i<=100;i++)
		{
		   i%2==0;
		   printf("%d\n",i); 
		 
		}
	}