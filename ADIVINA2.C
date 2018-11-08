#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
main()
{
int NP;
int ND;
char* M;
textbackground(2);
textcolor(0);
clrscr();
randomize();
printf("\nEste programa es didactico");
printf("\nProporciona el numero en el que cres que estoy pensando");

scanf("%d",&NP);
   ND=random(10)+1;
if(NP==ND)
{
M="Muchas felicidades campeon le atinaste";
}
else
{
M="Suerte a la proxima vaquero el numero en el que estaba pensando era el:";
}

printf("%s",M);
printf("%d",ND);
return 0;
}





