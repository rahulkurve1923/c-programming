//Read 3 persons name, age to find sum ,avg , eldest and youngest among them

#include<stdio.h>
#include<conio.h>

int main()
{
    int age1,age2,age3,sum;
    char nm1[10],nm2[10],nm3[10];
    float avg;

    printf("enter your name:");
    scanf("%s%s%s",&nm1,&nm2,&nm3);
    printf("enter your age :");
    scanf("%d%d%d",&age1,&age2,&age3);

    sum= age1+age2+age3;
    avg= sum/3;
    
    printf("sum of age:%d\n",sum);
    printf("average of age :%.2f\n",avg);
 {
    if(age1>age2 && age1>age3)
    {
        printf("%s is eldest\n",nm1);
        
    }
    
    else if(age2>age1 && age2>age3)
    { 
        printf("%s is eldest\n",nm2);
    }
   
    else if(age3>age1 && age3>age2)
     {
        printf("%s is eldest\n",nm3);
     }
 }

    if(age1<age2 && age1<age3)
    {
        printf("%s is youngest\n",nm1);
        
    }
    
    else if(age2<age1 && age2<age3)
    { 
        printf("%s is youngest\n",nm2);
    }
   
    else if(age3<age1 && age3<age2)
     {
        printf("%s is youngest\n",nm3);
     }
}

