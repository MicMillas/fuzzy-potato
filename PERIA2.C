#include <stdio.h>
#include <conio.h>
#include <math.h>

void Triangulo(void)
{
float base;
float altura;
float perimetro;
float area;
printf("\ningresa la base:");
scanf("%f",&base);
printf("\ningresa la altura:");
scanf("%f",&altura);
perimetro=base+altura+sqrt(pow(base,2)+pow(altura,2));
area=(base)*(altura)/2;
printf("\nel perimetro es :");
printf("%f",perimetro);
printf("\nel area es :");
printf("%f",area);
}

void Rectangulo(void)
{
float ancho;
float alto;
float perimetro;
float area;
printf("\ningresa el ancho:");
scanf("%f",&ancho);
printf("\ningresa el alto:");
scanf("%f",&alto);
perimetro=(ancho*2)+(alto*2);
area=ancho*alto;
printf("\nEl perimetro es :");
printf("%f",perimetro);
printf("\nEl area es :");
printf("%f",area);
}

void Poligono(void)
{
int numerodelados;
float apotema;
float medidadecadalado;
float perimetro;
float area;
printf("\ningresa el numero de lados:");
scanf("%d",&numerodelados);
printf("\ningresa el apotema:");
scanf("%f",&apotema);
printf("\ningresa la medida de un lado:");
scanf("%f",&medidadecadalado);
perimetro=numerodelados*medidadecadalado;
area=perimetro*apotema/2;
printf("\nEL perimetro corresponde a:");
printf("%f",perimetro);
printf("\nEl area corresponde a :");
printf("%f",area);
}

main()
{
int OPCION;
textbackground(7);
textcolor(0);
clrscr();
printf("proporcione numero de opcion:");
scanf("%d",&OPCION);
if(OPCION==1)
{
Triangulo();
}
else
{
if(OPCION==2)
{
Rectangulo();
}
else
{
if(OPCION==3)
{
Poligono();
}
}
}
return 0;
}



