#include<stdio.h>
#include<conio.h>
main()
{
char* ?;
textbackground(2);
textcolor(0);
clrscr();
printf(" Tablas de Multiplicar\n");
printf("¿Que tabla deseas realizar?\n");
scanf("%d",&tabla);
for(i=1;i<=10;i=i+1)
{
mult=tabla*i;
printf("%d x %d = %d\n",tabla,i,mult);
}
return 0;
}
