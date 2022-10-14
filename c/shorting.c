#include <stdio.h>
#include<conio.h>
#include <string.h>

#define MAX 100

int main()
{
  char name[MAX][MAX],swap[MAX];
  int age[MAX],n,i,j,temp;

  printf("\nEnter the number of person : ");
  scanf("%d",&n);

  printf("\n Enter name of %d person : ",n);
  for (i=0;i<n;i++)
  {
     scanf("%s",&name[i]);
  }
  
  printf("\n Enter age of  %d person \n",n);
  printf("\nSr.no\tName\tAge\n");

  for (i=0;i<n;i++)
  {
    printf("%d\t%s\t",i+1,name[i]);
    scanf("%d",&age[i]);
  }

  for (i=0;i<(n-1);i++)
  {
    for (j=0;j<n-i-1;j++)
    {
      if(strcmp(name[j],name[j+1])>0)
      {
        strcpy(swap,name[j]);
        strcpy(name[j],name[j+1]);
        strcpy(name[j+1],swap);
        temp=age[j];
        age[j]=age[j+1];
        age[j+1]=temp;
      }
    }
  }
  
  printf("\nList after shorting names\n");

  printf("\nSr.No\tName\tAge");
  for (i=0;i<n;i++)
  {
    printf("\n %d\t%s\t%d",i+1,name[i],age[i]);
  }


  for (i=0;i<(n-1);i++)
  {
    for (j=0;j<n-i-1;j++)
    {
      if(strcmp(name[j],name[j+1])==0 && age[j]>age[j+1])
      {
        strcpy(swap,name[j]);
        strcpy(name[j],name[j+1]);
        strcpy(name[j+1],swap);
        temp=age[j];
        age[j]=age[j+1];
        age[j+1]=temp;
      }
    }
  }
  printf("\n\nList after shorting names and age\n"); //if 

  printf("\nSr.No\tName\tAge");
  for (i=0;i<n;i++)
  {
    printf("\n %d\t%s\t%d",i+1,name[i],age[i]);
  }
}