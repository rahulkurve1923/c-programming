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
        printf("sum of even no. between 0 to 100 is : %d\n",even(n));
	
	}
	int even( int n)
	{
	   int s=0;
	if(n==100)
		return 100;
             s=n+even(n+=2);
            return s; 
    }