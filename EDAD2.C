#include <stdio.h>
#include <conio.h>
main ()
 {
	float AN;
	int E;
	char* E1;

	textbackground(7);
	textcolor(0);
	clrscr();

	printf ("Fecha de nacimiento:");
	scanf ("%f",&AN);

		E=2016-AN;

	if(E>=0&&E<=12)
	{
		E1="Es un ni¤o.";
			printf("\n En que etapa se encuentra?\n");
			printf("%s",E1);
			printf("\n Cual es su edad?\n");
			printf("%d",E);
	}
	else {
		if(E>=13&&E<=18)
		{
			E1="Es un adolescente.";
			printf("\n En que etapa se encuentra?\n");
			printf("%s",E1);
			printf("\n Cual es su edad?\n");
			printf("%d",E);
		}
		else {
			if(E>=19&&E<=49)
			{
				E1="Es un adulto.";
				printf("\n En que etapa se encuentra?\n");
				printf("%s",E1);
				printf("\n Cual es su edad?\n");
				printf("%d",E);
			}
			else {
				if(E>=50)
				{
					E1="Es un anciano.";
					printf("\n En que etapa se encuentra?\n");
					printf("%s",E1);
					printf("\n Cual es su edad?\n");
					printf("%d",E);
				}

		}
	   }
	   }



	return 0;
}