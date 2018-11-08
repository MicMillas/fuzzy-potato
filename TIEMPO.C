#include <stdio.h>
#include <conio.h>
main()
{
float H;
float M;
float S;
textbackground(7);
textcolor(1);
clrscr();
printf("\nPROPORCIONA NUMERO DE HORAS:");
scanf("%f",&H);
M=H*60;
S=H*60*60;
printf("\nLOS MINUTOS CORRESPONDIENTES SON:");
printf("%f",M);
printf("\nLOS SEGUNDOS CORRESPONDIENTES SON:");
printf("%f",S);
return 0;
}





