// Single Dim array of user defined size 
// add all array elements to find the sum of them 
// Find the greatest and lowest among array elements

 #include<stdio.h>
 #include<conio.h>

int main()  
{
    int A[20];
    int i,n,sum=0,max,min;

    printf("enter no. of sub in array : ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
       {
           printf("enter elements for A[%d] : ",i);
           scanf("%d",&A[i]);

       }
       printf("\nArray Sub\tElement");
       for(i=0;i<n;i++) 
	{
		printf("\nA[%d]\t\t%d",i,A[i]);
	}for(i=0;i<n;i++)
     {
         sum= sum + A[i];
     }

     printf("\n sum of elements : %d\n",sum);

     max=A[0];
     min=A[0];
     for(i=0;i<n;i++)
     {
        if (A[i]>max)
        {
           max=A[i];
        }
        else if(A[i]<min)
         {
            min=A[i];
         }
     }
         printf("\nmaximum is : %d\n",max);

         printf("\nminimum is : %d",min);


} 