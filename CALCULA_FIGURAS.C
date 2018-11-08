#include <stdio.h>
#include <conio.h>
#include <math.h>
main ()
 {
	int N;
	float B;
	float A1;
	float NL;
	float ML;
	float MA;
	float P;
	float A2;
		
	textbackground(7);
	textcolor(0);
	clrscr();

	
		printf("Ingrese el numero de opcion que desee realizar, considerando:\n 1 Triangulo Rectangulo\n 2 Rectangulo\n 3 Poligono Regular \n Opcion:");
		scanf("%i",&N);
		
	if(N==1)
	{
		printf("\n \nIngrese el valor de la base:");
		scanf("%f",&B);
		printf("\n Ingrese el valor de la altura:");
		scanf("%f",&A1);
		
		A2=(B*A1)/2;
		P=(B+A1)+(sqrt(pow(B,2)+pow(A1,2)));
	}
	else {
		if(N==2)
		{
		printf("\n \nIngrese el valor de la base:");
		scanf("%f",&B);
		printf("\n Ingrese el valor de la altura:");
		scanf("%f",&A1);
		
		P=B+B+A1+A1;
		A2=B*A1;
		
		}
		else{
			if(N==3)
			{
			
		printf("\n \nIngrese el numero de lados:");
		scanf("%f",&NL);
		printf("\n Ingrese la medida de cada lado:");
		scanf("%f",&ML);	
		printf("\n Ingrese el valor del apotema:");
		scanf("%f",&MA);			
		
		P=NL*ML;
		A2=(P*MA)/2;
		
			}
		}
	}
 
 			printf("\n El valor del perimetro es:\n");
			printf("%f",P);
			printf("\n El valor del area es:\n");
			printf("%f",A2);
			
		return 0;
 }