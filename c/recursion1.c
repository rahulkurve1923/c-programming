/*read a no and find 10 multiples of it .
	read a no -5 
	5 ,10,15....50*/

    #include<stdio.h>
    #include<conio.h>

    int multi(int ,int);

    int main()
    {
        int n;
        printf("enter a number :");
        scanf("%d",&n);

        multi(n,10);
    
    }

    
       int multi(int n,int m)
    {
          if(m==0)
             return ;
          printf("%d\n",n*(11-m));

          multi (n,--m);
     return ;
    }