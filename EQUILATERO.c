#include <stdio.h>
#include <conio.h>
main ()
 {
	float L1;
	float L2;
	float L3;
	char* E;
		
	textbackground(7);
	textcolor(0);
	clrscr();
	
		printf("Ingrese lado 1:");
		scanf("%f",&L1);
		printf("Ingrese lado 2:");
		scanf("%f",&L2);
		printf("Ingrese lado 3:");
		scanf("%f",&L3);

	if (L1=L2&&L2=L3)
		{
			E="Es un triangulo equilatero."
	}
	else
		{
			E="No es equilatero";
	}
	
	printf("\n Es equilatero o no?\n");
	printf("%s",E);

	return 0;

}