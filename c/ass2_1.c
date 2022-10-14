/*
 read the radius of circle to find diameter, area,circumference.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
 //Declaration of variable
  int rd,dia;
  float area,circum;

  // read the data
   
   printf("enter radius of circle:");
   scanf("%d",&rd);
   
   // comput
    dia = 2*rd;
    area= 3.14*rd*rd;
    circum= 2*3.14*rd;

    // print data

    printf("\t\t\t\t\tdata\n");
    printf("diameter:%d\n,",dia);
    printf("area:%.2f\n",area);
    printf("circumference:%.2f\n",circum);
}