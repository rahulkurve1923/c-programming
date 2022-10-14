// Read a Four Digit no to print it using Alphabate 
// i.p 1234 o.p One Two Three Four 

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,num=1000;

    printf("enter any number:");
    scanf("%d",&n);

    while (n>0)
    {
        switch(n/num)
		{
          
			case 1:
				printf("One ");
			break;
			case 2:
				printf("Two ");
			break;
			case 3:
				printf("Three ");
			break;
			case 4:
				printf("Four ");
			break;
			case 5:
				printf("Five ");
			break;
			case 6:
				printf("Six ");
			break;
			case 7:
				printf("Seven ");
			break;
			case 8:
				printf("Eight ");
			break;
			case 9:
				printf("Nine ");
            break;
            default:
                printf("zero ");
    }

    n=n-(n/num)*num;
    num=num/10;
    
   }
}