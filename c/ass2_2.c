/*Read inital reading, final reading of a electricity board consumer by reading name, meter no.
  Compute total units consumed and bill at the rate 3.50/=Rs per unit*/


#include<stdio.h>
#include<conio.h>

int main()
{
    int mtno, ir,fr,tr;
    char cnm[15];
    float totrs;

    printf("enter meter no =");
    scanf("%d",&mtno);
    printf("enter consumer name =");
    scanf("%s",&cnm);
    printf("enter initial reading =");
    scanf("%d",&ir);
    printf("enter final reading =");
    scanf("%d",&fr);

  //compute
    
    tr=fr-ir;
    totrs=3.50*tr;

  //output

    printf("\t\t\t\t\tbill\n");
    printf("total reading=%d\n",tr);
    printf("total rupees =%f\n",totrs);


}