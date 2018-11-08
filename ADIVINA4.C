#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
main()
{
int NP;
int ND;
int vidas=3;
char* M;
char* t;
textbackground(2);
textcolor(0);
clrscr();
randomize();
printf("\nAdivina en que numero estoy pensando del 1 - 10.");


scanf("%d",&NP);
   ND=random(10)+1;
if(NP==ND)
{
M="Felicidades, ese era.";
}
else
{
M="Suerte a la proxima, el numero era:";
}

printf("%s",M);
printf("%d",ND);
(vidas>0 && t!=1);
return 0;
}
