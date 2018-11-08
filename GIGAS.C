#include <stdio.h>
#include <conio.h>
main()
{
int giga;
int megas;
float bytes;
textbackground(7);
textcolor(1);
clrscr();
printf("Proporciona la cantidad de gigas:");
scanf("%d",&giga);
megas=1024*giga;
bytes=1.0*1024*1024*1024*giga;
printf("\nLos megas correspondientes son:");
printf("%d",megas);
printf("\nLos bytes correspondientes son:");
printf("%f",bytes);
return 0;
}