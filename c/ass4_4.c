/*Read book name , author name, price, quantity.
 Offer 20% discount to price computed and print net price*/

 #include<stdio.h>
 #include<conio.h>

 int main()

 {
    int pr,quan;
    char bnm,anm;
    float dpr,npr;

    printf("enter book name:");
    scanf("%s",&bnm);
    printf("enter author name:");
    scanf("%s",&anm);
    printf("enter price:");
    scanf("%d",&pr);
    printf("enter the quantity:");
    scanf("%d",&quan);

    dpr= 0.20*pr;
    npr= (quan*pr)-dpr;

    printf("discounted price:%.2f\n",dpr);
    printf("net price:%.2f",npr);
 }