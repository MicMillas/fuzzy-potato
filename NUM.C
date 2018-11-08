#include <stdio.h>
#include <conio.h>
main()
{
float N;
float D;
float R;
char* corre_incorre;
textbackground(7);
textcolor(1);
clrscr();
printf("\nproporciona el numerador:");
scanf("%f",&N);
printf("\nproporciona el denominador:");
scanf("%f",&D);
if(D!=0)
{
corre_incorre="correcto";
R=N/D;
printf("\nel resultado es:");
printf("%f",R);
printf("\n");
printf("%s",corre_incorre);
}
else
{
corre_incorre="incorrecto";
printf("%s",corre_incorre);
}
return 0;
}

