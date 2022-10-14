//Read nos till their summation remains less than or equal to 100 . Count total nos entered.

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,sum,cnt;

    do
    {
        printf("enter a number:");
        scanf("%d",&n);
        sum+=n;
        cnt++;

    } while (sum<=100);
    
   	printf("Summation :%d\n",sum);
    printf("Total nos entered :%d\n",cnt);
    
}