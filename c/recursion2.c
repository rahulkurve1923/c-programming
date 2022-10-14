// A pro to find the factorial of a no using recursion 
// n=n x n-1 x ....1


#include <stdio.h>
#include<conio.h>

int facto(int); 

int main()
{
		int n;
	
		printf("Enter a no :");
		scanf("%d",&n);
		printf("Factorial of a no :%d\n",facto(n)); 
  
}


int facto(int n) 
{ 
	int f;
	if(n==1)
		return 1;
	f=n*facto(n-1); 
	return f;
   }


