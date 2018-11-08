#include<stdio.h>
#include<conio.h>
#include<math.h>

void Poligono(void)
{
int numlados;
float Apotema;
float medidadeunlado;
float perimetro;
float area;
printf("\n\n Proporciona el numero de lados:");
scanf("%d",&numlados);
printf("\n\n Proporciona el apotema:");
scanf("%f",&Apotema);
printf("\n\n Proporciona la medida de un lado:");
scanf("%f",&medidadeunlado);
perimetro=numlados*medidadeunlado;
area=(perimetro*Apotema)/2;
printf("\n\n El perimetro es:");
printf("%f",perimetro);
printf("\n\n El area es:");
printf("%f",area);
}

void Triangulo(void)
{
float Base;
float Altura;
float perimetro;
float area;
printf("\n\n Proporciona la base:");
scanf("%f",&Base);
printf("\n\n Proporciona la altura:");
scanf("%f",&Altura);
perimetro=Base+Altura+sqrt(pow(Base,2)+pow(Altura,2));
area=(Base+Altura)/2;
printf("\n\n El perimetro es:");
printf("%f",perimetro);
printf("\n\n El area es:");
printf("%f",area);
}
void Rectangulo(void)
{
float Ancho;
float Alto;
float perimetro;
float area;
printf("\n\n Proporciona el ancho:");
scanf("%f",&Ancho);
printf("\n\n Proporciona el alto:");
scanf("%f",&Alto);
perimetro=(Ancho*2)+(Alto*2);
area=Ancho*Alto;
printf("\n\n El perimetro es:");
printf("%f",perimetro);
printf("\n\n El area es:");
printf("%f",area);
}
void despedida(void)
{
char* msg;
msg="Hasta luego";
printf("%s",msg);
}

main()
{

int OPCION;
	textbackground(7);
	textcolor(0);
	
do
{
	clrscr();
	
printf("\n\n\n Indica la operacion a realizar considerando:\n 1 Triangulo\n2 Rectangulo\n3 Poligono\n4 Finalizar programa. \nTu eleccion es:");
scanf("%d",&OPCION);

if(OPCION==1)
{
Triangulo();
}

else
{
	if(OPCION==2)
	{
	Rectangulo();
	}
	else
	{
		if(OPCION==3)
		{
		Poligono();
		}
		
		else{
			if(OPCION==4)
			{
			despedida();
			}
		}
	}
	}
    getch();
	}
while (OPCION!=4);

return 0;


}
