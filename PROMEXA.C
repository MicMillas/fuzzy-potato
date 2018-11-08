#include<stdio.h>
#include<conio.h>
void CALIFIN(void)
{
float califexa1;
float califexa2;
float califexa3;
float promprac;
float pondprac;
char* derecho;
float promexa;
float calfin;
char* tipocal;
float pondexa;
printf("\n Proporciona la calificacion del examen 1:");
scanf("%f",&califexa1);
printf("\n Proporciona la calificacion del examen 2:");
scanf("%f",&califexa2);
printf("\n Proporciona la calificacion del examen 3:");
scanf("%f",&califexa3);
printf("\n Proporciona el promedio practico:");
scanf("%f",& promprac);
if(((califexa1>=6)&&(califexa2>=6))&&((califexa3>=6)&&(promprac>=6)))
{
derecho="\n\n Tiene derecho a calificacion.";
promexa=(califexa1+califexa2+califexa3)/3;
pondexa=promexa*.40;
pondprac=promprac*.60;
calfin=pondexa+pondprac;
if(calfin<8)
{
tipocal="\n \n \n La calificacion final es regular";
}
else
{
if((calfin>=8)&&(calfin<=9.5))
{
tipocal="\n\n\n La calificacion final es buena.";
}
else
{
tipocal="\n\n\n La calificacion final es excelente.";
}
}
printf("\n\n\n La persona:");
printf("%s",derecho);
printf("\n\n El promedio del examen es:");
printf("%f", promexa);
printf("\n\n La calificaci¢n final es:");
printf("%f", calfin);
printf("%s", tipocal);
}
else
{
derecho="\n\n\n No tiene derecho a calificacion.";
printf("%s",derecho);
}
}

void PROMOCION(void)
{
float gasto;
int tp;
char* p;
float d;
float a;
float pa;
char* poa;
float pam;
printf("\n ¨Cuanto gastara el cliente?");
scanf("%f",&gasto);
printf("\n ¨Cual ser  su tipo de pago?");
scanf("%d",&tp);
if(tp==1)
{
p="\n\n Se le hara un descuento del 25%";
d=gasto*.25;
pa=gasto-d;
printf("\n\n Se le hara un descuento de:");
printf("%f", d);
printf("\n\n El cliente pagar :");
printf ("f", pa);
printf("\n\n Su descuento es:");
printf("%s", d);
}
else
{
if(tp==2)
{
p="Se abonar  a monedero de compra el 15% de su compra.";
a=gasto*.15;

if(a<250)
{
poa="\n\n No podra adquirir nada.";
}
else
{
if((a>=250)&&(a<1000))
{
poa="\n\n Podra adquirir un producto peque¤o.";
}
else
{
if((a>=1000)&&(a<=3500))
{
poa="\n\nPodra adquirir un producto mediano.";
}
else
{
if(a>3500)
{
poa="\n\n Podra adquirir un producto grande.";
}
}
}
}
printf("\n\n\n Le abonaran:");
printf("%f",a);
printf("\n\n Su promocion es:");
printf("%s", p);
printf("\n\n ¨Qu‚ podra aquirir");
printf("%s", poa);
}
else
{
if(tp==3)
{
p="Pagar  su compra en 9 meses,sin cobro de interes:";
pam=gasto/9;
printf("%s",p);
printf("\n\n El cliente pagar  al mes:");
printf("%f",pam);
}
}
}
}

void DESPEDIDA(void)
{
char* desp;
desp="\n\n GRACIAS POR USAR EL PROGRAMA VUELVA PRONTO NO ME SAQUE DE LA OPCION TECNICA MAESTRA";
printf("%s", desp);
}

main()
{
int O;
textcolor(2);
textbackground(0);
clrscr();
printf("\n Proporciona la opcion que deseas realizar:");
scanf("%d",&O);
if(O==1)
{
CALIFIN();
}
else
{
if(O==2)
{
PROMOCION();
}
else
{
DESPEDIDA();
}
}
return 0;
}
