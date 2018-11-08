#include<stdio.h>
#include<conio.h>
main()
{
float ancho;
float alto;
float perimetro;
float area;
textbackground(7);
textcolor(1);
clrscr();

    printf("\nproporciona el ancho:");
    scanf("%f",&ancho);
    printf("\nproporciona el alto del terreno:");
    scanf("%f",&alto);
    area=ancho*alto;
perimetro=ancho*2+alto*2;
printf("\nel area del terreno es:");
printf("%f",area);
printf("\nel perimetro del terreno es:");
printf("%f",perimetro);
return 0;
}




