#include<stdio.h>
#include<conio.h>
main()
{
int N;
int E;
textbackground(7);
textcolor(0);
clrscr();
printf("proporciona fecha de nacimiento");
scanf("%d",&N);
E=2016-N;
printf("la edad correspondiente es:");
printf("%d",E);
return 0;
}