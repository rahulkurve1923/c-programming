// develop a funcion which will read a string and return no of words in it.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[50];
    int i,cnt=1;

    printf("string : ");
    gets(str);
   
    while (str[i]<'\0')
    {
        if(str[i]==' ' && str[i+1]!=' ');
        {
           cnt++;
          
        }
    }
    printf("no. of words in this string : %d\n",cnt+1);
}
