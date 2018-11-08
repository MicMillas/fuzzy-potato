#include<stdio.h>
#include<conio.h>
main()
{
float Ancho;
float Alto;
float Area;
float Perimetro;
textbackground(4);
textcolor(7);
clrscr();
printf("Proporciona el ancho:");
scanf("%f",&Ancho);
printf("\n Proporciona la altura:");
scanf("%f",&Alto);
Area=Ancho*Alto;
Perimetro=Ancho+Ancho+Alto+Alto;
printf("\n El area es:\n");
printf("%f",Area);
printf("\n \n El perimetro es:");
printf("%f",Perimetro);
return 0;
}