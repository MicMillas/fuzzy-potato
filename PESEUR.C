#include <stdio.h>
#include <conio.h>
main ()
{
float P;
float E;
textbackground(15);
textcolor(4);
clrscr();
printf("proporciona una cantidad en pesos:");
scanf("%f",&P);
E=P*1/19.37;
printf("\n\nel proporcional en euros es:");
printf("%f",E);
return 0;
}