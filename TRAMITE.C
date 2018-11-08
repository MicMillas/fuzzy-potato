#include <stdio.h>
#include <conio.h>
main()
{
int N;
int E;
char* lic_per_n;
textbackground(7);
textcolor(0);
clrscr();
printf("Proporciona fecha de nacimiento:  ");
scanf("%d",&N);
E=2016-N;
printf("\nLa edad correspondiente es:");
printf("%d",E);
if(E>=18)
{
lic_per_n="licencia";
}
else
{
if(E<=16)
{
lic_per_n="Nada";
}
else
{
lic_per_n="Permiso";
}
}
printf("\n");
printf("%s",lic_per_n);
return 0;
}

