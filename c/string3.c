// Read a String and change case of it 

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[30];
    int i;

    printf("enter a string in any case : ");
    scanf("%s",&str);

    for (i=0;i<strlen(str);i++)
    {
        if (str[i]>=65 && str[i]<=91) //for upper 
           str[i]=str[i]+32;
        else if(str[i]>=97 && str[i]<=123)  //for lower
           str[i]=str[i]-32;
        
    }
    printf("Changed case String :%s\n",str);
    
}