#include<stdio.h>
#include<stdlib.h>

void main()
{
int num=0;
int suma=0;

while(num<=10)
{
suma = suma + num;
num++;
}

printf(“Suma = %d\n”,suma);

system(“pause”);
}