 //Read a temperature in centigrade to convert it into farhenite


 #include<stdio.h>
 #include<conio.h>

 int main()
 {
    float tempc,tempf;

    printf("enter temperature in centigrade\n");
    scanf("%f",&tempc);

    //compute

    tempf= tempc*9/5+32;

    //output

    printf("\t\t\t\t\tans\n");
    printf("temperature in farhenhite:%.5f",tempf);

 }