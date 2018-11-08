#include<stdio.h>
#include<conio.h>

struct{
float PUV,PU,ND,PE,CP;
}d1,d2,d3;

	void CAPTURADEDATOS(void)
{


printf("\n\n\n A continuacion se hara la captura de los primeros datos:");
printf("\n\n Indique el precio unitario en venta:");
scanf("%f", &d1.PUV);
printf("\n Indique el precio unitario:");
scanf("%f", &d1.PU);
printf("\n Ponga el numero de departamento:");
scanf("%f", &d1.ND);
printf("\n Proporciona el codigo del producto:");
scanf("%f", &d1.CP);
printf("\n Cual es la cantidad de productos:");
scanf("%f", &d1.PE);

printf("\n\n\n\n\n A continuacion se hara la captura de los segundos datos:");
printf("\n\n Indique el precio unitario en venta:");
scanf("%f", &d2.PUV);
printf("\n Indique el precio unitario:");
scanf("%f", &d2.PU);
printf("\n Ponga el numero de departamento:");
scanf("%f", &d2.ND);
printf("\n Proporciona el codigo del producto:");
scanf("%f", &d2.CP);
printf("\n Cual es la cantidad de productos:");
scanf("%f", &d2.PE);

printf("\n\n\n\n\n A continuacion se hara la captura de los tereros datos:");
printf("\n\n Indique el precio unitario en venta:");
scanf("%f", &d3.PUV);
printf("\n Indique el precio unitario:");
scanf("%f", &d3.PU);
printf("\n Ponga el numero de departamento:");
scanf("%f", &d3.ND);
printf("\n Proporciona el codigo del producto:");
scanf("%f", &d3.CP);
printf("\n Cual es la cantidad de productos:");
scanf("%f", &d3.PE);
}



	void OBTENCIONDEDATOS(void)
{



float GU,D,PF,GT,CP,PE,PV;

GU=d1.PU-d1.PUV;
GT=GU*d1.PE;

if((d1.ND==1)||(d1.ND==3))
{
D=d1.PUV*.30;
PF=d1.PUV-D;
}
else
{


if((d1.ND==2)||(d1.ND==2))
{
D=d1.PUV*.20;
PF=d1.PUV-D;
}
else
{


if((d1.ND==5)||(d1.ND==6))
{
D=d1.PUV*.15;
PF=d1.PUV-D;
}
else
{


if(d1.ND>=7)
{
D=d1.PUV*0;
PF=d1.PUV-D;
}
}
}
}




GU=d2.PU-d2.PUV;
GT=GU*d2.PE;

if((d2.ND==1)||(d2.ND==3))
{
D=d2.PUV*.30;
PF=d2.PUV-D;
}
else
{


if((d2.ND==2)||(d2.ND==2))
{
D=d2.PUV*.20;
PF=d2.PUV-D;
}
else
{


if((d2.ND==5)||(d2.ND==6))
{
D=d2.PUV*.15;
PF=d2.PUV-D;
}
else
{


if(d2.ND>=7)
{
D=d2.PUV*0;
PF=d2.PUV-D;
}
}
}
}


GU=d3.PU-d3.PUV;
GT=GU*d3.PE;

if((d3.ND==1)||(d3.ND==3))
{
D=d3.PUV*.30;
PF=d3.PUV-D;
}
else
{


if((d3.ND==2)||(d3.ND==2))
{
D=d3.PUV*.20;
PF=d3.PUV-D;
}
else
{


if((d3.ND==5)||(d3.ND==6))
{
D=d3.PUV*.15;
PF=d3.PUV-D;
}
else
{


if(d3.ND>=7)
{
D=d3.PUV*0;
PF=d3.PUV-D;
}
}
}
}

printf("\n\n\n En los primeros datos los resultados fueron:");
printf("\n\nel descuento que se aplicara es de : ");
printf("%f",D);
printf("\n\nel precio con el descuento aplicado es:");
printf("%f",PF);
printf("\n\nLa ganacia de cada producto vendido es:");
printf("%f",GU);
printf("\n\nLa ganacia total de los productos es de:");
printf("%f",GT);



printf("\n\n\n\n En los segundos datos los resultados fueron:");
printf("\n\nel descuento que se aplicara es de : ");
printf("%f",D);
printf("\n\nel precio con el descuento aplicado es:");
printf("%f",PF);
printf("\n\nLa ganacia de cada producto vendido es:");
printf("%f",GU);
printf("\n\nLa ganacia total de los productos es de:");
printf("%f",GT);


printf("\n\n\n\ En los terceros datos los resultados fueron:");
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