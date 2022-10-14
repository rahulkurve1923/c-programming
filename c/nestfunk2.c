/*Read a no to find their digital sum 
	i.p- 1234
	o.p - 10 */

    #include<stdio.h>
    #include<conio.h> 

    int printnumber(int);
    int digi(int);

    int main()
    {
       int n;
        printnumber(n);
    }
    int ptintnumber(int n)
    {
        printf("enter a number : ");
        scanf("%d",&n);

        digi(n);
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
        printf("digital sum is :%d\n",dsum);

    }