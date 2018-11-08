#include <stdio.h>
#include <conio.h>
#include <math.h>
main ()
 {
	float a;
	float b;
	float c;
	float R1;
	float R2;
	char* RR;
		
	textbackground(7);

	textcolor(
	0);

	clrscr();
	
		printf("Ingrese el valor de a en la ecuacion cuadratica:");
		scanf("%f",&a);
		printf("Ingrese el valor de b en la ecuacion cuadratica:");
		scanf("%f",&b);
		printf("Ingrese el valor de c en la ecuacion cuadratica:");
		scanf("%f",&c);

	if ( pow (b,2)-(4*a*c) >= 0)
		{
			RR="Tiene raices reales.";
			R1=(-b + sqrt(pow (b,2)-4*a*c))/(2*a);
			R2=(-b - sqrt(pow (b,2)-4*a*c))/(2*a);
			printf("\n Tiene raices reales?\n");
			printf("%s",RR);
			printf("\n Resultado positivo:\n");
			printf("%f",R1);
			printf("\n Resultado negativo: \n");
			printf("%f",R2);
	}
	else
		{
			RR="No tiene raices reales";
			
			printf("\n Tiene raices reales?\n");
			printf("%s",RR);
	}
		
	return 0;

}