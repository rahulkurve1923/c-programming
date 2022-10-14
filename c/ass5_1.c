//Read your name to print for 20 times on screen using counter 

#include<stdio.h>
#include<conio.h>

int main()

{
    char nm[10];
    int i;

    printf("enter your name:");
    scanf("%s",&nm);

    for(i=1;i<=20;i++)
    printf("%d.  %s\n",i,nm);
}