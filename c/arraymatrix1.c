
#include <stdio.h>
#include<conio.h>

#define MAX 10

int main()
{
    int A[MAX][MAX], B[MAX][MAX], R[MAX][MAX];
    int ar,ac,br,bc;
    int i,j,k;
	int sum=0;

      printf("Enter rows and columns for the matrix A : ");
      scanf("%d  %d", &ar, &ac);

      printf("enter the elements for matrix A : \n"); 

       for(i=0;i<ar;i++) 
	{
		for(j=0;j<ac;j++) 
		{
			printf("Enter Element of A[%d][%d] ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
      printf("\n");

      printf("Enter rows and columns for the matrix B : ");
      scanf("%d%d", &br, &bc);

      if (br!=ac)
      {
        printf("sorry! cant multiply this matrix");
      }
      else
      {
       printf("enter the elements for matrix B : \n");

       for(i=0;i<br;i++) 
	   {
		for(j=0;j<bc;j++) 
		{
			printf("Enter Element of B[%d][%d] ",i,j);
			scanf("%d",&B[i][j]);
		}
	   }
      }
   
     printf("\n");
    sum=0;
     for (i=0;i<ar;i++)
     {
        for (j=0;j<bc;j++)
        {
            sum=0;
            for (k=0;k<br;k++)
            {
                sum+= A[i][k] * B[k][j];
                R[i][j]=sum;
            }
        }   
     }
      printf("resultunt matrix R : \n ");
	  for (i=0;i<ar;i++) 
	  {
        for (j=0;j<bc;j++) 
		{
			printf("%d\t",R[i][j]);
		}
	    printf("\n");
      }
      return 0;
}