#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
float Co;
float Ca;
float H;
float P;
float A;
textbackground (6);
textcolor(0);
clrscr();
printf("\nProporciona el Cateto opuesto:");
scanf("%f",&Co);
printf("\nProporciona el Cateto adyacente:");
scanf("%f",&Ca);
H=sqrt(pow(Co,2)+pow(Ca,2));
P=Co+Ca+H;
A=(Co*Ca)/2;
printf("\nLa Hipotenusa es:");
printf("%f",H);
printf("\nEl Perimetro correspondiente es:");
printf("%f",P);
printf("\nEl Area correspondiente es:");
printf("%f",A);
return 0;
}