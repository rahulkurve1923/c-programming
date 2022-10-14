
#include<stdio.h>
#include<conio.h>

int main()
{
    int A=5;
    int *B=&A;

    printf("memory address of A : %u\n",&A);
    printf(" memory address of B : %u\n",&B);
    printf(" value of A : %d\n",A);
    printf(" value of B : %d\n",*B);
    
    *B+=5;
    printf("value of A : %d\n",A);

}