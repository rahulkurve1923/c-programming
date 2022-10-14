/* Read Person name ,age to check voting Eligibility*/

#include<stdio.h>
#include<conio.h>

int main()

{
    int age;
    char nm;

    printf("enter you name:");
    scanf("%s",&nm);
    printf("enter your age:");
    scanf("%d",&age);

    if (age>18)
    {
        printf("you are elligible");
    }
    else
    {
        printf("you are not elligible");
    }
}