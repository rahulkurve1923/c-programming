/*Read temp in centigrade and if it more than 30 display message hot , if it is more than 40 very hot else
normal*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int temp;
    

    printf("enter temperature:");
    scanf("%d",&temp);
  {
    if (temp>30 && temp<40)
     printf("it is hot");
     else if (temp>40)
     printf("it is very hot");
     else if (temp <30)
     printf("it is normal");
  }
}