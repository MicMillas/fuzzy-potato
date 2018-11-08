#include<stdio.h>
#include<stdlib.h>

void main()
{
int num;
int suma=0;

for(num=0; num<=10; num++)
{
suma = suma + num;
}

printf(“Suma = %d\n”,suma);

system(“pause”);
}