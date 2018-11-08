#include <stdio.h>
#include <conio.h>
main ()
 {
	float N;
	float D;
	float R;
	char* S;
		
	textbackground(7);
	textcolor(0);
	clrscr();
	
		printf("Ingrese numerador:");
		scanf("%f",&N);
		printf("Ingrese denominador:");
		scanf("%f",&D);

	if (D!=0)
		{
			S="Si se puede realizar.";
			R=N/D;
	}
	else
		{
			S="No se puede realizar";
			R=0
	}
	
	printf("\n Se puede realizar?\n");
	printf("%s",S);
	printf("\n El resultado es:\n");
	printf("%s",R);

	return 0;

}