#include<stdio.h>
#include<conio.h>
void DIVISAS(void)
{
float DO;
float DD;
float P;
float D;
float E;
float C;
printf("\n\n Proporciona la divisa de origen:");
scanf("%f", &DO);
printf("\n Proporciona la divisa de destino:");
scanf("%f", &DD);
if(DO==1)
{
printf("\n Proporciona los pesos:");
scanf("%f",&P);
if(DD==2)
{
printf("\n\n Tus dolares totales son:");
C=P*1/20.71;
printf("%f",C);
}
else
{
if(DD==3)
{
printf("\n\n Tus euros totales son:");
C=P*1/22.34;
printf("%f",C);
}
}
}
else
{
if(DO==2)
{
printf("\n Proporciona la cantidad de dolares:");
scanf("%f",&D);
if(DD==1)
{
printf("\n\n Tus pesos totales son:");
C=D=20.71;
printf("%f",C);
}
else
{
if(DD==3)
{
printf("\n\n Tus euros totales son:");
C=(D*20.71)/22.34;
printf("%f",C);
}
}
}
else
{
if(DO==3)
{
printf("\nProporciona la cantidad de euros");
scanf("%f",&E);
if(DD==1)
{
printf("\n\n Tus pesos totales son:");
C=E*22.34;
printf("%f",C);
}
else
{
if(DD==2)
{
printf("\n\n Tus dolares totales son:");
C=(E*22.34)/20.71;
printf("%f",C);
}
}
}
}
}
}


void DESPEDIDA(void)
{
char* desp;
desp="\n\n\n Gracias por entrar al programa:)";
printf("%s", desp);
}


main()
{
float opcion;
do
{
textcolor(4);
textbackground(9);
clrscr();
printf("\n Proporciona la opcion que deseas realizar:");
scanf("%f",&opcion);
if(opcion==1)
{
DIVISAS();
}
else
{
if(opcion==2)
{
DESPEDIDA();
}
}
getch();
}
while(opcion!=2);
return 0;
}