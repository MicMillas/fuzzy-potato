#include <stdio.h>
#include <conio.h>
main ()
 {
	float N;
	float E;
	char* M;
	
	textbackground(7);
	textcolor(0);
	clrscr();
	
	printf ("Fecha de nacimiento:");
	scanf ("%f",&N);
		E= 2016-N;
	if(E>=18)
	{
		M="Es mayor de edad";
	}
	else {
		M="No es mayor de edad";
	}
	printf("\n Es mayor de edad?\n");
	printf("%s",M);
	printf("\n Su edad es:\n");
	printf("%f",E);

	return 0;
}