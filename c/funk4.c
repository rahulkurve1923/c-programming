  #include<stdio.h>
    #include<conio.h>

    int multi(int);
    int digi(int);

    int main()
    {
        int n;
        char nm;

        printf("enter a number :\n");
        scanf("%d",&n);
       
       
        multi(n);
        digi(n);
    
    }

    int multi(int n)
    {
        int i;
        for (i=1;i<=10;i++)
           printf("%d*%d=%d\n\n",n,i,(n*i));
    
        
    }

    int digi(int n)
    {
        int i,r,dsum=0;

        while (n>0)
        {
          r =n%10;
          dsum+=r;
          n=n/10;
        }
        printf("digital sum is :%d\n\n",dsum);

    }
