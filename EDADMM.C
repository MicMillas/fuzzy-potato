#include <stdio.h>
#include <conio.h>
main()
{
int N;
int E;
char* may_men;
textbackground(7);
textcolor(0);
clrscr();
printf("proporciona fecha de nacimiento");
scanf("%d",&N);
E=2016-N;
if(E>=18)
{
may_men="es mayor de edad";
}
else
{
may_men="es menor de edad";
}
printf("\nla edad correspondiente es:");
printf("%d",E);
printf("\n");
printf("%s",may_men);
return 0;
}

