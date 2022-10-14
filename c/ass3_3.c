// Read a no to check whether it is even or odd

#include<stdio.h>
#include<conio.h>

int main()
{
    int no;

    printf("enter a number:");
    scanf("%d",&no);

    if (no%2==0)
    {
        /* code */
        printf("number is even:%d",no);
    }
    else
    {
        printf("number is odd:%d",no);
    }
}