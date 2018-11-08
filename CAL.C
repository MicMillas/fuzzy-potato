#include <stdio.h>
#include <conio.h>
main()
{
float O;
float N1;
float N2;
float R;
textbackground(7);
textcolor(1);
clrscr();
printf("\ningresa NUMERO 1:");
scanf("%f",&N1);
printf("\ningresa OPERACION:");
scanf("%f",&O);
printf("\ningresa NUMERO 2:");
scanf("%f",&N2);
if(O==1)
{
R=N1+N2;
}
else
{
if(O==2)
{
R=N1-N2;
}
else
{
if(O==3)
{
R=N1*N2;
}
else
{
if(O==4)
{
R=N1/N2;
}
}
}
}
printf("\n");
printf("%f",R);
return 0;
}

