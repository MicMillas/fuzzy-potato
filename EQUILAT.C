
#include <stdio.h>
#include <conio.h>
main()
{
float L1;
float L2;
float L3;
char* equi_no;
textbackground(7);
textcolor(1);
clrscr();
printf("\nproporciona el lado 1:");
scanf("%f",&L1);
printf("\nproporciona el lado 2:");
scanf("%f",&L2);
printf("\nproporciona el lado 3:");
scanf("%f",&L3);
if((L1==L2)&&(L2==L3))
{
equi_no="es equilatero";
}
else
{
equi_no="no es equilatero";
}
printf("%s",equi_no);
return 0;
}

