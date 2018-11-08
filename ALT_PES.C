#include <stdio.h>
#include <conio.h>
main()
{
int PP1;
int PP2;
int AP1;
int AP2;
char* alt_pes;
char* alt_pes2;
textbackground(1);
textcolor(0);
clrscr();
printf("\ningresa PESO de la persona 1:");
scanf("%d",&PP1);
printf("\ningresa PESO de la persona 2:");
scanf("%d",&PP2);
printf("\ningresa ALTURA de la persona 1:");
scanf("%d",&AP1);
printf("\ningresa ALTURA de la persona 2:");
scanf("%d",&AP2);
if(PP1<=PP2)
{
alt_pes="la persona 1 es menos pesada";
}
else
{
alt_pes="la persona 2 es menos pesada";
}
if(AP1>=AP2)
{
alt_pes2="la persona 1 es mas alta";
}
else
{
alt_pes2="la persona 2 es mas alta";
}
printf("%s",alt_pes);
printf("\n");
printf("%s",alt_pes2);
return 0;
}





