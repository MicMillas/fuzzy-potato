
#include<stdio.h>
#include<conio.h>
void califin(void)
{
float califexa1;
float califexa2;
float califexa3;
float promprac;
float promexa;
float calfinal;
float ponderaexa;
float ponderaprac;
char* derecho;
char* tipocalif;
printf("\n\n Calificacion 1");
scanf("%f",&califexa1);
printf("\n\ Calificacion 2");
scanf("%f",&califexa2);
printf("\n\n Calificacion 3");
scanf("%f",&califexa3);
printf("\n\n Digita el promedio de practicas:");
scanf("%f",&promprac);
if((califexa1>=6)&&(califexa2>=6)&&(califexa2>=6)&&(promprac>=6))
{
derecho="Tiene derecho a calificacion";
promexa=(califexa1+califexa2+califexa3)/3;
ponderaexa=.40*promexa;
ponderaprac=.60*promprac;
calfinal=ponderaexa+ponderaprac;

if(calfinal<8)
{
tipocalif="La calificacion final es regular";
printf("\n\n Tiene derecho?");
printf("%s",derecho);
printf("\n\n el pomedio de examen es:");
printf("%f",promexa);
printf("\n\n la calificacion final es:");
printf("%f",calfinal);
printf("\n\n ¨que tipo de calificacionn es?:");
printf("%s",tipocalif);
}
else
{
if((calfinal>=8)&&(calfinal<=9.5))
{
tipocalif="la calificacion es buena";
printf("\n\n ¨tiene derecho?:");
printf("%s",derecho);
printf("\n\n el promedio de examen es:");
printf("%f",promexa);
printf("\n\n la calificacion final es:");
printf("%f",calfinal);
printf("\n\n ¨que tipo de calificacion es?");
printf("%s",tipocalif);
}
else
{
tipocalif="La calificacion es excelente";
printf("\n\n ¨Tiene derecho?");
printf("%s",derecho);
printf("\n\n La calificacion de examen es:");
printf("%f", promexa);
printf("\n\n La calificacion final es:");
printf("%f",calfinal);
printf("\n\n ¨Que tipo de calificaciones?");
printf("%s",tipocalif);
}}
}
else
{
derecho="No tiene derecho a calificacion";
printf("%s",derecho);
}
}

void promotienda(void)
{
float gastara;
int tipo_pago;
char* promosion;
float gasto;
float descuento;
char* ad;
float abono;
float pago_mes;
char* no;
printf("\n\n Introduce cuanto gastara");
scanf("%f",&gastara);
printf("\n\n tipo de pago");
scanf("%d",&tipo_pago);
if(tipo_pago==1)
{
promosion="se le hara un descuento del 25 por ciento";
descuento=.40*gastara;
gasto=gastara-descuento;
printf("\n\n La promocion es:");
printf("%s",promosion);
printf("\n\n El descuento es:");
printf("%f",descuento);
printf("\n\n Dinero gastado:");
printf("%f",gasto);
}
else
{
if(tipo_pago==2)
{
promosion="se le abonara al monedero electronico el 15 por ciento de su compra";
abono=gastara*.15;
if(abono<=249)
{
ad="no podra adquirir nada";
printf("\n\n el abono es:");
printf("%f",abono);
printf("%s",ad);
}
else
{
if((abono>=250)&&(abono<=999))
{
ad="podra adquirir un producto peque¤o";
printf("\n\n El abono es");
printf("%f",abono);
printf("%s",ad);
}
else
{
if((abono>=1000)&&(abono<=3499))
{
ad="Podra adquirir un podructo mediano";
printf("\n\n El abono es:");
printf("%f",abono);
printf("%s",ad);
}
else
{
if(abono>3500)
{
ad="Usted podra adquirir un producto grande";
printf("\n\n El abono es:");
printf("%f",abono);
printf("%s",ad);
}
}
}
}
}
else
{
if(tipo_pago==3)
{
promosion="Pagara su compra en 9 mess";
pago_mes=gastara/9;
printf("\n\n la promocion es:");
printf("%s",promosion);
printf("\n\n El pago de cada mes es:");
printf("%f",pago_mes);
}
else
{
no="no se puede";
printf("%s",no);
}
}}}

void despedida(void)
{
char* despedida;
despedida="Hasta luego";
printf("%s",despedida);
}
main()
{
int opcion;
textbackground(7);
textcolor(0);

do{
clrscr();

printf("\n\n Digita la opcion a seguir");
scanf("%d",&opcion);
if(opcion==1)
{
califin();
}
else
{
if(opcion==2)
{
promotienda();
}
else
{
if(opcion==3)
{
despedida();
}
}}
getch();}
while (opcion!=3);
return 0;
}
