#include <stdio.h>
#include <conio.h>
main()
{
int i;
char a;
textbackground(2);
textcolor(8);
clrscr();
for(i=33;i<=254;i++)
{
printf("%d   ",i);
printf("%c\n",i);

}
getch();
return 0;
}