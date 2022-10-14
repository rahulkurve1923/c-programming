/* construct a single dimension array of integer to find
    list all elements with sub.
    sum
    average
    max 
    min */
 
   #include<stdio.h>
   #include<conio.h>

   int main()   
   {
       int A[10];
       int i,sum=0,max,min;
       float avg;

       for (i=0;i<10;i++)
       {
           printf("enter elements for A[%d] : ",i);
           scanf("%d",&A[i]);

       }
       printf("\nArray Sub\tElement");
       
    for(i=0;i<10;i++) 
	{
		printf("\nA[%d]\t\t%d",i,A[i]);
	}
     
     for(i=0;i<10;i++)
     {
         sum= sum + A[i];
     }
     avg = sum / 10;

     printf("\n sum of elements : %d\n",sum);
     printf("\n avg of elements : %0.2f\n",avg);

     max=A[0];
     min=A[0];
     for(i=0;i<10;i++)
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
