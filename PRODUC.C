#include<stdio.h>
#include<conio.h>
main()
{
struct {
float PUV;
float PU;
float ND;
float PE;
float CP;
}mamalucha;

float D;
float PF;
float GU;
float GT;
textbackground(0);
textcolor(2);
clrscr();

printf("\n\nIndique el precio unitario en venta :");
scanf("%f",&mamalucha.PUV);
printf("\n\nIndique el precio unitario");
scanf("%f",&mamalucha.PU);
printf("\n\n Ponga el numero de departamento :");
scanf("%f",&mamalucha.ND);
printf("\n\nIntroduzca el codigo del producto :");
scanf("%f",&mamalucha.CP);
printf("\n\nCual es la cantidad de productos :");
scanf("%f",&mamalucha.PE);

GU=mamalucha.PUV-mamalucha.PU;
GT=GU*mamalucha.PE;
if((mamalucha.ND==1)||(mamalucha.ND==3))
{
D=mamalucha.PUV*.30;
PF=mamalucha.PUV-D;
}
else
{


if((mamalucha.ND==2)||(mamalucha.ND==2))
{
D=mamalucha.PUV*.20;
PF=mamalucha.PUV-D;
}
else
{


if((mamalucha.ND==5)||(mamalucha.ND==6))
{
D=mamalucha.PUV*.15;
PF=mamalucha.PUV-D;
}
else
{


if(mamalucha.ND>=7)
{
D=mamalucha.PUV*0;
PF=mamalucha.PUV-D;
}
}
}
}

printf("\n\nel descuento que se aplicara es de : ");
printf("%f",D);
printf("\n\nel precio con el descuento aplicado es:");
printf("%f",PF);
printf("\n\nLa ganacia de cada producto vendido es:");
printf("%f",GU);
printf("\n\nsLa ganacia total de los productos es de:");
printf("%f",GT);
return 0;
}