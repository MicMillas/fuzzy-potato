#include <stdio.h>
#include <conio.h>
main()
{
int i;
char a;
textbackground(2);
textcolor(8);
clrscr();
for(i=33;i<=125;i++)
{
printf("\Introduce caracter:");
scanf("%s",&a);
i=a;
printf("\El caracter correspondiente es:");
printf("%d",i);
}
getch();
return 0;
}