#include<stdio.h>
#include<conio.h>
main()
{
int c;
char* mensaje;
char* mensaje2;
textbackground(2);
textcolor(0);
clrscr();

for(c=1;c<=20;c=c+1)
{
mensaje="\nrepetir";
printf("El mensaje es: ");
printf("%s",mensaje);
}
mensaje2="\nse repitio 20 veces";
printf("%s",mensaje2);
return 0;
}