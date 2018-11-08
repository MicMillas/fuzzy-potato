#include<stdio.h>
#include<conio.h>

struct{
float PUV,PU,ND,PE,CP;
}d;

void CAPTURADEDATOS(void)
{

printf("\n\n Indique el precio unitario en venta:");
scanf("%f", &d.PUV);
printf("\n Indique el precio unitario:");
scanf("%f", &d.PU);
printf("\n\n Ponga el numero de departamento:");
scanf("%f", &d.ND);
printf("\n\n Proporciona el codigo del producto:");
scanf("%f", &d.CP);
printf("\n Cual es la cantidad de productos:");
scanf("%f", &d.PE);
}



void OBTENCIONDEDATOS(void)
{

float GU,D,PF,GT,CP,PE,PV;

GU=d.PU-d.PUV;
GT=GU*d.PE;

if((d.ND==1)||(d.ND==3))
{
D=d.PUV*.30;
PF=d.PUV-D;
}
else
{


if((d.ND==2)||(d.ND==2))
{
D=d.PUV*.20;
PF=d.PUV-D;
}
else
{


if((d.ND==5)||(d.ND==6))
{
D=d.PUV*.15;
PF=d.PUV-D;
}
else
{


if(d.ND>=7)
{
D=d.PUV*0;
PF=d.PUV-D;
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
printf("\n\nLa ganacia total de los productos es de:");
printf("%f",GT);

getch();
}

void GUDBAIVAQUERO(void)
{
char* despedida;
despedida="\n\n\n Gracias por entrar al programa, te ha hablado mich y te deseo buenas noches :)";
printf("%s", despedida);
getch();
}


main()
{
int o;
do
{
textcolor(2);
textbackground(0);
clrscr();
printf("\n Proporciona la opcion que deseas realizar:");
scanf("%d",&o);


if(o==1)
{
CAPTURADEDATOS();
}
else
{
if(o==2)
{
OBTENCIONDEDATOS();
}
else
{
if(o==3)
{
GUDBAIVAQUERO();
}
}
}
}
while(o!=3);

return 0;
}