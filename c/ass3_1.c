/*Read price for dozen of oranges and quantity to purchase. Compute price for given quantity and
 round it to nearest integer*/

 #include<stdio.h>
 #include<conio.h>

 int main()

 {
    int prdor,quant;
    float totprice;

    printf("enter price of dozen of oranges:\n");
    scanf("%d",&prdor);
    printf("enter the quantity of oranges(kg):\n");
    scanf("%d",&quant);

    // compute

    totprice=prdor*quant;

    printf("\t\t\t\t\t\ttotal\n");
    printf("total price of oranges:%.2f\n",totprice);
 }