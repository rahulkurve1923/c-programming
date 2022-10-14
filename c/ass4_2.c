/*Read Student Name ,Percentage and check for eligibility for interview
per>=65 is eligible else print "waiting"*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float per;
    char nm;

    printf("enter your name:");
    scanf("%s",&nm);
    printf("enter your percentage:");
    scanf("%f",&per);

    if (per>=65)
    {
        printf("you are elligible for interview");
    }
    else
    {
        printf("you are not elligible for interview");
    }
}