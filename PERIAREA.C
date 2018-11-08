#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
float O;
float B;
float A;
float ANCHO;
float Alto;
float NL;
float P;
float ML;
float a;
clrscr();
textbackground(3);
textcolor(9);
printf("\n\nDame el numero de la opcion:");
scanf("%f",&O);
if(O==1)
{
printf("\n\nDame el valor de la base:");
scanf("%f",&B);
printf("\n\nDame el valor de la alto:");
scanf("%f",&Alto);
A=B*Alto/2;
P=B+Alto+sqrt((B*B)+(Alto*Alto));
printf("\n\nDame el valor del perimetro:");
printf("%f",P);
printf("\n\nDame el valor del area:");
printf("%f",A);
}
else
{
if(O==2)
{
printf("\n\nDame el valor del ANCHO:");
scanf("%f",&ANCHO);
printf("\n\nDame el valor de lo Alto:");
scanf("%f",&Alto);
A=ANCHO*Alto;
P=ANCHO+ANCHO+Alto+Alto;
printf("\n\nDame el valor del perimetro:");
printf("%f",P);
printf("\n\nDame el valor del area:");
printf("%f",A);
}
else
{
if(O==3)
{
printf("\n\nDame el  numero de lados:");
scanf("%f",&NL);
printf("\n\nDame la medida de un lado:");
scanf("%f",&ML);
printf("\n\nDame el valor de la apotema:");
scanf("%f",&a);
P=NL*ML;
A=P*a/2;
printf("\n\nDame el valor del perimetro:");
printf("%f",P);
printf("\n\nDame el valor del area:");
printf("%f",A);
}
}
}
return 0;
}









