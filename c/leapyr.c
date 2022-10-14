#include<stdio.h>
#include<conio.h>

int main()
{
    int yr;

    printf("enter the year : ");
    scanf("%d",&yr);
    
    if (yr % 400 == 0 || yr % 100 == 0 || yr % 4 == 0) 
    {
      printf("%d is a leap year.", yr);
    }
    else
    {
        printf("%d is not a leap year.", yr);
    }
    return 0;
}