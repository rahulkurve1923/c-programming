#include<stdio.h>
#include<conio.h>

int main()
{
    int A[]={2,3,5,9,8,4,7,6,1,10};
    int S,pos,i,n;

    n=sizeof(A)/4; 
  
    printf("\nEnter Element to search :");
	  scanf("%d",&S);

    for ( i = 0; i < n; i++)
    {
       if (A[i]==S)
       {
         pos=i;
         break;
       }
    }
    
    if ( i<n)
    printf("element %d found at position : %d",S,pos);
    else if(i>=n)
		printf("Data not found in an array\n");

}