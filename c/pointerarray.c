// Pointers to an Array 
#include <stdio.h>
#include<conio.h>
int main()
{
	int A[]={10,20,30,40,50,60,70,80,90,100},i;
	int *B;
	
	B=A; 
	printf("Array Sub\t Element \n");
	
	while(*B)
	{
		printf("%d\n",*(B++));
	}
	B=A;
	printf("Traversing reverse\n");
	for(i=9;i>=0;i--)
		printf("A[%d]\t\t%d\n",i,*(B+i));
	
}
