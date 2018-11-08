#include<stdio.h>
#include<conio.h>
main()
{
float S;
float GH;
float CI;
float I;
textbackground(7);
textcolor(1);
clrscr();
printf("\nCual es su sueldo mensual neto?:");
scanf("%f",&S);
GH=S/160;
if((S<=3000))
{
CI=S*.0;
I=S-CI;
}
else
{
if((S>=3001)&&(S<=10000))
{
CI=S*.02;
I=S-CI;
}
else
{
if((S>=10001)&&(S<=30000))
{
CI=S*.10;
I=S-CI;
}
else
{
if(S>=30001)
{
CI=S*.30;
I=S-CI;
}
}
}
}
printf("\n\nSu ganancia por hora es:");
printf("%f",GH);
printf("\n\nEl calculo de sus impuestos a restar es:");
printf("%f",CI);
printf("\n\nSu sueldo final es :");
printf("%f",I);
return 0;
}