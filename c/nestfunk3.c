/*Read any name and print it for 20 times on the screen 
	read - Ankita
	1 Ankita 
	2 Ankita
	20 Ankita*/

#include<stdio.h>
#include<conio.h>

int printname(char []);
int printnm(char []);

int main()
{
    char nm[10];
    printname(nm);
}

int printname(char x[])
{
    char nm[10];
    printf("enter your name : ");
    scanf("%s",&nm);

    printnm(nm);
}
int printnm(char x[])
{
    int i;

    for (i=1;i<=20;i++)
       printf("%d\t%s\n",i,x);
    
}