#include <stdio.h>
#include <conio.h>
main()
{
int i;
int b;
textbackground(2);
textcolor(0);
clrscr();
for(i=33;i<=81;i++)
{
printf("%d : ",i);
printf("%c\n",i);
}

for(i=82;i<=130;i++)
{
gotoxy(10,i-81);


printf("%d  : ",i);
printf("%c\n",i);
getch();
}

for(i=131;i<=179;i++)
{
gotoxy(20,i-130);
printf("%d  : ",i);
printf("%c\n",i);
getch();
}


for(i=180;i<=228;i++)
{
gotoxy(30,i-179);
printf("%d  : ",i);
printf("%c\n",i);
getch();
}

for(i=229;i<=254;i++)
{
gotoxy(40,i-228);


printf("%d  : ",i);
printf("%c\n",i);
getch();
}


getch();
return 0;
}