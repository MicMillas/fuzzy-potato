#include<stdio.h>
#include<conio.h>
void masacorporal(void)
{
float peso;
float estatura;
float imc;
char* clasificacion;
printf("\n\n Proporciona el peso");
scanf("%f",&peso);
printf("\n\n Proporciona la estarura");
scanf("%f",&estatura);
imc=peso/(estatura*estatura);
if(imc<=15.99)
{
clasificacion:"Tiene delgadez severa";
printf("\n\n El Indice de Masa Corporal es:");
printf("%f",imc);
printf("\nn La clasificacion es:");
printf("%s",clasificacion);
}
else
{
if((imc>=16)&&(imc<=16.99))
{
clasificacion="Tiene delgadez moderada";
printf("\n\n El Indice de Masa Corporal es;");
printf("%f",imc);
printf("\n\n La clasificacion es;");
printf("%s",clasificacion);
}
else
{
if((imc>=17)&&(imc<=18.49))
{
clasificacion="Tiene delgadez leve";
printf("\n\n El Indice de Masa Corporal es:");
printf("%f",imc);
printf("\n\n La clasificacion es:");
printf("%s",clasificacion);
}
else
{
if((imc>=18.5)&&(imc<=24.99))
{
clasificacion="Tiene peso normal";
printf("\n\n El Indice de Masa Corporal es:");
printf("%f",imc);
printf("\n\n La clasificacion es:");
printf("%s",clasificacion);
}
else
{
if((imc>=25)&&(imc<=29.99))
{
clasificacion="Tiene pre-obesidad";
printf("\n\n El Indice De Masa Corporal es:");
printf("%f",imc);
printf("\n\n La Clasificacion es");
printf("%s",clasificacion);
}
else
{
if((imc>=30)&&(imc<=34.99))
{
clasificacion="Tiene obesidad leve";
printf("\n\n El Indice de Masa Corporal es:");
printf("%f",imc);
printf("\n\n La Clasificacion es:");
printf("%s",clasificacion);
}
else
{
if((imc>=35)&&(imc<=39.99))
{
clasificacion="Tiene obesidad media";
printf("\n\n El Indice De Masa Corporal es:");
printf("%f",imc);
printf("\n\n La Clasificacion es:");
printf("%s",clasificacion);
}
else
{
if(imc>=40)
{
clasificacion="Tiene obesidad morbida";
printf("\n\n El Indice De Masa Corporal es:");
printf("%f",imc);
printf("\n\n La Clasificacion es:");
printf("%s",clasificacion);
}
}}}}}}}
}
void estaturapromedio(void)
{
int edad;
float estatura;
char* determinacion;
char* no;
printf("\n\n Proporciona la edad:");
scanf("%d",&edad);
printf("\n\n Proporciona la estatura:");
scanf("%f",&estatura);
if(edad<=14)
{
determinacion="Estas en pleno crecimiento,todavia no alcanzas estatura promedio";
printf("%s",determinacion);
}
else
{
if(((edad>=15)&&(edad<=35))&&((estatura>=1.71)&&(estatura<=1.80)))
{
determinacion="Usted tiene una estatura promedio";
printf("%s",determinacion);
}
else
{
if((edad>=36)&&((estatura>=1.60)&&(estatura<=1.70)))
{
determinacion="Usted tiene estatura promedio";
printf("%s",determinacion);
}
else
{
no="Usted no tiene estatura promedio";
printf("%s",no);
}
}}
}
void msgdesp(void)
{
char* despedida;
despedida="Hasta Luego";
printf("%s",despedida);
}
main()
{
int opcion;

do
{
textbackground(7);
textcolor(0);
clrscr();
printf("\n\n Indica la opcion a seguir:");
scanf("%d",&opcion);
if(opcion==1)
{
masacorporal();
}
else
{
if(opcion==2)
{
estaturapromedio();
}
else
{
if(opcion==3)
{
msgdesp();
}
}}
getch();
}
while(opcion!=3);
return 0;
}
