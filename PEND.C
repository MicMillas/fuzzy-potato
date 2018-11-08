main()
{
float XC1;
float XC2;
float YC1;
float YC2;
float P;
char* TP;
textbackground(7);
textcolor(1);
clrscr();
printf("\nproporciona X DE COORDENADA 1:");
scanf("%f",&XC1);
printf("\nproporciona X DE COORDENADA 2:");
scanf("%f",&XC2);
printf("\nproporciona Y DE COORDENADA 1:");
scanf("%f",&YC1);
printf("\nproporciona Y DE COORDENADA 2:");
scanf("%f",&YC2);
if((XC2-XC1)==0)
{
TP="la pendiente no esta definida";
printf("%s",TP);
}
else
{
P=((YC2-YC1)/(XC2-XC1));
if(P>=0)
{
TP="La pendiente es positiva";
}
else
{
if(P<=0)
{
TP="la pendiente es negativa";
}
else
{
TP="la pendiente es cero";
}
}
printf("\nTIPO DE PENDIENTE:");
printf("%s",TP);
printf("\nla pendiente ES :");
printf("%f",P);
return 0;
}
}
