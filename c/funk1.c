/*read a no and find 10 multiples of it .
	read a no -5 
	5 ,10,15....50*/

    #include<stdio.h>
    #include<conio.h>

    int multi(int);

    int main()
    {
        int n;
        printf("enter a number :");
        scanf("%d",&n);

        multi(n);
      
    }
       int multi(int n)
    {
        int i;
        for (i=1;i<=10;i++)
           printf("%d*%d=%d\n",n,i,(n*i));
    
        
    }











