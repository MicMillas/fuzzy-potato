#include <stdio.h>
#include <conio.h>
main ()
 {
	float C1;
	float C2;
	float C3;
	float C4;
	char* AR;
	float P;
	
	textbackground(7);
	textcolor(0);
	clrscr();
	
		printf("Calificacion 1:");
		scanf("%f",&C1);
		printf("Calificacion 2:");
		scanf("%f",&C2);
		printf("Calificacion 3:");
		scanf("%f",&C3);
		printf("Calificacion 4:");
		scanf("%f",&C4);

		P=(C1+C2+C3+C4)/4;

	if (P>=6.0)
		{
			AR="Aprobado";
	}
	else
		{
			AR="Reprobado";
	}
	printf("\n Su promedio es:\n");
	printf("%f",P);
	printf("\n Aprobado o reprobado?\n");
	printf("%s",AR);

	return 0;

}