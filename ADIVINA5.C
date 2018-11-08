#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
main()
{
int NP;
int ND;
char* M;
void juego(void){
	int m,n,mi,nj,vidas=3;
	char t;
textbackground(2);
textcolor(0);
clrscr();
randomize();

printf("Proporciona el numero en el que cres que estoy pensando");

scanf("%d",&NP);
   ND=random(10)+1;
if(NP==ND)
{
M="Felicidades, ese era";
}
else
{
M="SIGUE INTENTANDO:";
}
do
	{
		t=inport(0x60);
		switch(t)
		{
printf("%s",M);
printf("%d",ND);
}while(yb<=484 && t!=1);               
	delay(90);
	}while(vidas>0 && t!=1);
return 0;
}
