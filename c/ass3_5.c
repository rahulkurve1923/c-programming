/* Read person age to display following message as per age
< 18 --Jr. Kid
>=18 <25 College going
>=25 <40 Career oriented
>=40 <60 middle age
>=60 Old age */

#include<stdio.h>
#include<conio.h>

int main()

{
    int age;

    printf("enter your age :");
    scanf("%d ",&age);

    
      if (age<18)
       printf("jr. kid");
       else if (age>=18 && age<25)
       printf("going college");
       else if (age>=25 && age<40)
       printf("career oriented");
       else if (age>=40 && age<60)
       printf("middle age");
       else if (age>=60)
       printf("old age");
       
}