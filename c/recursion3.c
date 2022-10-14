/*Read any name and print it for 20 times on the screen 
	read - Ankita
	1 Ankita 
	2 Ankita
	20 Ankita*/

#include<stdio.h>
#include<conio.h>

int printnm(char [], int);

int main()
{
    char nm[10];
    int i;

    printf("enter your name : ");
    scanf("%s",&nm);
   
    printnm(nm,20);

   
}
int printnm(char nm[], int i)
{
  if(i>=0)
    printf("%s\n",nm);

    printnm(nm,--i);
  

}
