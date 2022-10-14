//addition of two matrix

#include<stdio.h>
#include<conio.h>

int main()
{
    int A[2][2]={4,6,8,2};
    int B[2][2]={6,8,9,11};
    int C[2][2] ;
    int r,c;

    printf("print element of mat A :\n");
    for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%4d",A[r][c]);
		}
		printf("\n");
	}
    printf("\n");

    printf("print element of mat B :\n");
    for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%4d",B[r][c]);
		}
		printf("\n");
	}
    printf("\n");

    printf("print element of mat C :\n");
    for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			C[r][c] = A[r][c] + B[r][c];
			printf("%4d",C[r][c]);
		}
		printf("\n");
	}
}