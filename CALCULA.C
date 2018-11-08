#include <stdio.h>
#include <conio.h>
#include <math.h>
main ()
 {
	float N1;
	float N2;
	float OPR;
	float RE;

	textbackground(7);
	textcolor(0);
	clrscr();

	printf ("Ingresa el primer numero:");
	scanf ("%f",&N1);
	printf ("Ingresa el segundo numero:");
	scanf ("%f",&N2);
	printf ("Ingresa el numero de operacion a realizar, considerando: \n 1 Suma  \n 2 Resta  \n 3 Multiplicacion \n 4 Division \n\n  Numero de operacion:");
	scanf ("%f",&OPR);

	if(OPR==1)
	{
		RE=N1+N2;

	}
	else {
		if(OPR==2)
		{
			RE=N1-N2;

		}
		else {
			if(OPR==3)
			{
				RE=N1*N2;

			}
			else {
				if(OPR==4)
				{
					RE=N1/N2;

				}

		}
	   }
	   }

	printf ("\n \nEl resultado es:");
	printf ("%f",RE);



	return 0;
}