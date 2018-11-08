
#include <stdio.h>
#include <conio.h>
#include <math.h>

main ()
{
	float inver;
	float ahor;
	float total;
	char* regal;

		textbackground(7);
		textcolor(0);
		clrscr();

printf("Proporciona la cantidad de dinero invertido:");	
scanf("%f",&inver);
printf("Proporciona la cantida de dinero ahorrado:");
scanf("%f",&ahor);

	total=inver+ahor;

if(total<5000)
	{ regal="No le daran nada";}
else
	{
	if(total>=5000&&total<=50000)
	{regal="Le daran un reloj despertador";}
	else
	{
		if(total>=50000&&total<=250000)
		{regal="Le daran una vajilla";}
		else
		{
			if(total>=250000)
			{regal="Le daran una tablet.";}
		}
	}
	}
	
	printf("\nEl total es:");
	printf("%f",total);
	printf("\nSu regalo es:");
	printf("%s",regal);

	return 0;
}