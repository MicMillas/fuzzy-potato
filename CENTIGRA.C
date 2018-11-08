#include <stdio.h>
#include <conio.h>
main()
{
float C;
float F;
float K;
textbackground(9);
textcolor(6);
clrscr();
printf("\nproporciona los grados C:");
scanf("%f",&C);
F=C*1.8+32;
K=C+273.15;
printf("\nlos grados F correspondientes son:");
printf("%f",F);
printf("\nlos grados K correspondientes son:");
printf("%f",K);
return 0;
}



