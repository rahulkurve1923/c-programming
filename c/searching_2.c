#include <stdio.h>
#include<conio.h>

int main()
{
    int A[]={10,20,30,40,50,60,70,80,90,100};
    int n,i,Mid,S,pos;

    n=sizeof(A)/2; 
	Mid=A[n/2];
    
    printf("Enter Element to Search :");
	scanf("%d",&S);
    if(S==Mid)
	{
		pos=n/2;
		printf("Found at position :%d\n",pos);
	}
	else if(S<Mid)
	{
		for(i=(n/2)-1;i>=0;i--)
		{
			if(S==A[i])
			{
				pos=i;
				break;
			}
		}
	}
	else if(S>Mid)
	{
		for(i=(n/2)+1;i<n;i++)
		{
			if(S==A[i])
			{
				pos=i;
				break;
			}
		}
	}
printf("Element found at Position :%d\n",pos);
	
}

















