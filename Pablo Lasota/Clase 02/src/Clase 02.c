/*
 ============================================================================
 Name        : Clase.c
 Author      : Lasota Pablo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_INT	64537

 int suma(int,int);


int main(void)
{
	int primerValor;
	int segundoValor;
	int resultado=0;
	printf("Ingrese un primer valor:");
	scanf("%d",&primerValor);
	printf("Ingrese un segundo valor:");
	scanf("%d",&segundoValor);
	if(suma(primerValor,segundoValor,&resultado) == 0)
	{
		printf("El resultado es: %d\n",resultado);

	}
	else
	{
		printf("Error");
	}
}
 int suma(int valorA, int valorB,int *resultado)
 {
	 int retorno = -1;
	 long resultadoLong;
	 *resultado = valorA + valorB;
	 if(resultadoLong <= MAX_INT){
		 retorno = 0;
		 *resultado = (int)resultadoLong;
	 }
	 else{

	 }
	 return retorno;

 }
