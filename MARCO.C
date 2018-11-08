#include<stdio.h>          ascii
#include<conio.h>

main()
{
char* O;
char* P;
char* Q;
int i;

textbackground(0);
textcolor(2);
clrscr();

for(i=0;i<=79;i=i+1)
{
O="r";
printf("%s",O);
}

for(i=1;i<=23;i=i+1)
{
P="*                                                                              *\n";
 printf("%s",P);
}

for(i=0;i<=79;i=i+1)
{
Q="r";
printf("%s",Q);
}

getch();
return 0;
}
