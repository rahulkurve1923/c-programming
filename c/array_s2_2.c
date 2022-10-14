// Demonstrating 2-D array 
// Read size of mat ,insert and print element in the mat format
// find out row-wise summation

#include <stdio.h>
#include<conio.h>

#define MAX 20

int main()
{
    int A[MAX][MAX];
	int m,n,i,j,rs=0;

    printf("Enter row Size of a MAT :");
	scanf("%d",&m);
    printf("Enter column Size of a MAT :");
	scanf("%d",&n);

    for(i=0;i<m;i++) 
	{
		for(j=0;j<n;j++) 
		{
			printf("Enter Element of A[%d][%d] ",i,j);
			scanf("%d",&A[i][j]);
		}
	}

	 for (i=0;i<m;i++) 
	 {
		rs=0;
        for (j=0;j<n;j++) 
		{
			printf("%4d",A[i][j]);
			rs+= A[i][j];
		}
   
	  printf("\tSum of %d row: %d",i+1, rs); 

	  printf("\n");
	}

}