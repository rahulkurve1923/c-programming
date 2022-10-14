/* Read name , age ,height of a person , apply criteria for selection that is age should be in the range 18-
25 years and height should be >=5.4 */


#include<stdio.h>
#include<conio.h>

int main()
{
    int age;
    char nm[10];
    float ht;

    printf("enter your name:");
    scanf("%s",&nm);
    printf("enter your age:");
    scanf("%d",&age);
    printf("enter your height:");
    scanf("%f",&ht);

    if (age>18 && age<25 && ht>=5.4)
    {
        /* code */
        printf("%s is selected\n",nm);
    }
    else
    {
        printf("%s is not elligible\n",nm);
    }
}   