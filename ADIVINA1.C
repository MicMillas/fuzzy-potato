#include<stdio.h>
#include<conio.h>
main()
{
int NP;
char* M;
textbackground(3);
textcolor(1);
clrscr();
    printf("\nEste programa es didactico \n");
    printf("\nproporciona el numero en el que cres que estoy pensando");
    scanf("%d",&NP);
    if(NP!=7)
{
M="\nLo siento, suerte a la proxima vaquero\n";
}
else
{
M="\nMuchas felicidades campeon lo has conseguido\n";
}
printf("%s",M);
return 0;
}
