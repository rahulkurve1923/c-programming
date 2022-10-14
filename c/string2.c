//a pro. to return no of occurance of a character in a string

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[50],ch;
    int i,count=0;

    printf("enter the string : ");
    gets(str);

    printf("Please Enter the Character that you want to Search for :  ");
  	scanf("%c",&ch);

    for (i=0;i<strlen(str);i++)
    {
        if (str[i]==ch)
        {
            count++;
        }
        
    }
    
    printf("\nThe Total Number of %c occurance = %d ", ch, count);
}