/*Price Discount
<1500 0
>=1500 <4500 2%
>=4000 <6000 4%
>=6000 8% */

#include<stdio.h>
#include<conio.h>

int main()
{
    int pr;
    float dpr,tpr;

    printf("enter price:");
    scanf("%d",&pr);

    if(pr<1500)
    {
        printf("discounted price:%.2f\n",pr);
    }
    else if(pr>=1500 && pr<4500)
    {
        dpr=0.02*pr;
        printf("discounted price:%.2f\n",dpr);
    }
    else if(pr>=4000 && pr<6000)
    {
        dpr=0.04*pr;
        printf("discounted price :%.2f\n",dpr);
    }
    else
    {
        dpr=0.08*pr;
        printf("discounted price :%.2f\n",dpr);
    }
}