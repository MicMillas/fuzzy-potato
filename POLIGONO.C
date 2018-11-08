#include <stdio.h>
#include <conio.h>
main()
{
float nl;
float a;
float L;
float A;
float P;
textbackground(9);
textcolor(5);
clrscr();
printf("proporcione numero de lados:");
scanf("%f",&nl);
printf("proporcione apotema:");
scanf("%f",&a);
printf("proporcione medida del lado:");
scanf("%f",&L);
P=nl*L;
A=(P*a)/2;
printf("\nEl perimetro del poligono es:");
printf("%f",P);
printf("\nEl area del poligono es:");
printf("%f",A);
return 0;
}





