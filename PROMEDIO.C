#include <stdio.h>
#include <conio.h>
main()
{
float C1;
float C2;
float C3;
float C4;
float P;
textbackground(1);
textcolor(0);
clrscr();
printf("\ningresa Calificacion 1:");
scanf("%f",&C1);
printf("\ningresa Calificacion 2:");
scanf("%f",&C2);
printf("\ningresa Calificacion 3:");
scanf("%f",&C3);
printf("\ningresa Calificacion 4:");
scanf("%f",&C4);
P=(C1+C2+C3+C4)/4;
printf("\nel promedio final es:");
printf("%f",P);
return 0;
}





