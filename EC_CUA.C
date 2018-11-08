#include <stdio.h>
#include <conio.h>
#include <math.h>
main ()
{
float Ca;
float Cb;
float Cc;
float r1;
float r2;
textbackground(7);
textcolor(1);
clrscr();
printf("\nProporciona el Coeficiente a:");
scanf("%f",&Ca);
printf("\nProporciona el Coeficiente b:");
scanf("%f",&Cb);
printf("\nProporciona el Coeficiente c:");
scanf("%f",&Cc);
r1=(-Cb+sqrt(pow(-Cb,2)-4*Ca*Cc))/(2*Ca);
r2=(-Cb-sqrt(pow(-Cb,2)-4*Ca*Cc))/(2*Ca);
printf("\nLa primera raiz es:");
printf("%f",r1);
printf("\nLa segunda raiz es:");
printf("%f",r2);
return 0;
}